#ifndef ALL_TEST_H
#define ALL_TEST_H

#include "test_parser.h"

void all_test_str_name();
void all_test_is_op();
void all_test_a_variable_name_flags();
void all_test_is_var();
void all_test_is_negative_return_value();
void all_test_more_than_one_decimal_or_negative();
void all_test_is_num();
void all_test_num_or_var();
void all_test_is_move();
void all_test_mock_check_within_bounds();
void all_test_mock_polish();
void all_test_mock_set();
void all_test_mock_do_from_to();

void all_test_mock_instruction();
unsigned int mock_instruction(Prog *p);
void test_mock_instruction_fail1(void);
void test_mock_instruction_fail2(void);
void test_mock_instruction_fail3(void);
void test_mock_instruction_pass_fd(void);
void test_mock_instruction_pass_lt(void);
void test_mock_instruction_pass_rt(void);
void test_mock_instruction_pass_do(void);
void test_mock_instruction_pass_set(void);

/* 
 * Suite 28 Tests -
 * mock_instruction_list (turtle_parser.c) 
 */
unsigned int mock_instruction_list(Prog *p);
void test_mock_instruction_list_fail1(void);
void test_mock_instruction_list_fail2(void);
void test_mock_instruction_list_fail3(void);
void test_mock_instruction_list_empty(void);
void test_mock_instruction_list_pass1(void);
void test_mock_instruction_list_pass2(void);
void test_mock_instruction_list_pass3(void);

/* 
 * Suite 29 Tests - 
 * mock_parser_program_main (turtle_parser.c) 
 */
unsigned int mock_parser_program_main(Prog *p);
void test_mock_parser_program_main_incor1(void);
void test_mock_parser_program_main_incor2(void);
void test_mock_parser_program_main_incor3(void);
void test_mock_parser_program_main_incor_empty_file(void);
void test_mock_parser_program_main_pass(void);

#endif