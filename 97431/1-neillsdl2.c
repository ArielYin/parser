#include "neillsdl2.h"

void Neill_SDL_Init(SDL_Simplewin *sw)
{

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "\nUnable to initialize SDL:  %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    sw->finished = 0;

    sw->win = SDL_CreateWindow("SDL Window",
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED,
                               WWIDTH, WHEIGHT,
                               SDL_WINDOW_SHOWN);
    if (sw->win == NULL)
    {
        fprintf(stderr, "\nUnable to initialize SDL Window:  %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    sw->renderer = SDL_CreateRenderer(sw->win, -1, 0);
    if (sw->renderer == NULL)
    {
        fprintf(stderr, "\nUnable to initialize SDL Renderer:  %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    Neill_SDL_SetDrawColour(sw, 0, 0, 0);
    SDL_RenderClear(sw->renderer);
    SDL_RenderPresent(sw->renderer);
}

void Neill_SDL_Events(SDL_Simplewin *sw)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
        case SDL_MOUSEBUTTONDOWN:
        case SDL_KEYDOWN:
            sw->finished = 1;
        }
    }
}

void Neill_SDL_SetDrawColour(SDL_Simplewin *sw, Uint8 r, Uint8 g, Uint8 b)
{

    SDL_SetRenderDrawColor(sw->renderer, r, g, b, SDL_ALPHA_OPAQUE);
}

void Neill_SDL_RenderFillCircle(SDL_Renderer *rend, int cx, int cy, int r)
{

    double dy;
    for (dy = 1; dy <= r; dy += 1.0)
    {
        double dx = floor(sqrt((2.0 * r * dy) - (dy * dy)));
        SDL_RenderDrawLine(rend, cx - dx, cy + r - dy, cx + dx, cy + r - dy);
        SDL_RenderDrawLine(rend, cx - dx, cy - r + dy, cx + dx, cy - r + dy);
    }
}

void Neill_SDL_RenderDrawCircle(SDL_Renderer *rend, int cx, int cy, int r)
{

    double dx, dy;
    dx = floor(sqrt((2.0 * r)));
    SDL_RenderDrawLine(rend, cx - dx, cy + r, cx + dx, cy + r);
    SDL_RenderDrawLine(rend, cx - dx, cy - r, cx + dx, cy - r);
    for (dy = 1; dy <= r; dy += 1.0)
    {
        dx = floor(sqrt((2.0 * r * dy) - (dy * dy)));
        SDL_RenderDrawPoint(rend, cx + dx, cy + r - dy);
        SDL_RenderDrawPoint(rend, cx + dx, cy - r + dy);
        SDL_RenderDrawPoint(rend, cx - dx, cy + r - dy);
        SDL_RenderDrawPoint(rend, cx - dx, cy - r + dy);
    }
}

void Neill_SDL_DrawString(SDL_Simplewin *sw, fntrow fontdata[FNTCHARS][FNTHEIGHT], char *str, int ox, int oy)
{

    int i = 0;
    unsigned char chr;
    do
    {
        chr = str[i++];
        Neill_SDL_DrawChar(sw, fontdata, chr, ox + i * FNTWIDTH, oy);
    } while (str[i]);
}

void Neill_SDL_DrawChar(SDL_Simplewin *sw, fntrow fontdata[FNTCHARS][FNTHEIGHT], unsigned char chr, int ox, int oy)
{

    unsigned x, y;
    for (y = 0; y < FNTHEIGHT; y++)
    {
        for (x = 0; x < FNTWIDTH; x++)
        {
            if (fontdata[chr - FNT1STCHAR][y] >> (FNTWIDTH - 1 - x) & 1)
            {
                Neill_SDL_SetDrawColour(sw, 255, 255, 255);
                SDL_RenderDrawPoint(sw->renderer, x + ox, y + oy);
            }
            else
            {
                Neill_SDL_SetDrawColour(sw, 0, 0, 0);
                SDL_RenderDrawPoint(sw->renderer, x + ox, y + oy);
            }
        }
    }
}

void Neill_SDL_ReadFont(fntrow fontdata[FNTCHARS][FNTHEIGHT], char *fname)
{

    FILE *fp = fopen(fname, "rb");
    size_t itms;
    if (!fp)
    {
        fprintf(stderr, "Can't open Font file %s\n", fname);
        exit(1);
    }
    itms = fread(fontdata, sizeof(fntrow), FNTCHARS * FNTHEIGHT, fp);
    if (itms != FNTCHARS * FNTHEIGHT)
    {
        fprintf(stderr, "Can't read all Font file %s (%d) \n", fname, (int)itms);
        exit(1);
    }
    fclose(fp);
}
