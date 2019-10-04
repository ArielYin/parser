#include "all_test.h"

void all_test_str_name()
{
    test_str_same_not_equal();
    test_str_same_equal();
}

void all_test_is_op()
{
    test_is_op_incorrect_length();
    test_is_op_incorrect1();
    test_is_op_incorrect2();
    test_is_op_incorrect3();
    test_is_op_incorrect4();
    test_is_op_incorrect5();
    test_is_op_correct();
}

void all_test_a_variable_name_flags()
{
    test_a_variable_name_flags_incorrect_name1();
    test_a_variable_name_flags_incorrect_name2();
    test_a_variable_name_flags_incorrect_name3();
    test_a_variable_name_flags_incorrect_name4();
    test_a_variable_name_flags_incorrect_name5();
    test_a_variable_name_return_correct_names();
}
void all_test_is_var()
{
    test_is_var_incorrect_length();
    test_is_var_incorrect_name1();
    test_is_var_incorrect_name2();
    test_is_var_incorrect_name3();
    test_is_var_incorrect_name4();
    test_is_var_incorrect_name5();
    test_is_var_correct_name();
}

void all_test_is_negative_return_value()
{
    test_is_negative_return_value_false1();
    test_is_negative_return_value_false2();
    test_is_negative_return_value_false3();
    test_is_negative_return_value_false4();
    test_is_negative_return_value_false5();
    test_is_negative_return_value_true();
}

void all_test_more_than_one_decimal_or_negative()
{
    test_more_than_one_decimal_or_negative_true1();
    test_more_than_one_decimal_or_negative_true2();
    test_more_than_one_decimal_or_negative_true3();
    test_more_than_one_decimal_or_negative_true4();
    test_more_than_one_decimal_or_negative_true5();
    test_more_than_one_decimal_or_negative_false1();
    test_more_than_one_decimal_or_negative_false2();
    test_more_than_one_decimal_or_negative_false3();
    test_more_than_one_decimal_or_negative_false4();
}

void all_test_is_num()
{
    test_is_num_incorrect1();
    test_is_num_incorrect2();
    test_is_num_incorrect3();
    test_is_num_incorrect4();
    test_is_num_incorrect5();
    test_is_num_cor_non_negative_integer();
    test_is_num_cor_negative_integer();
    test_is_num_cor_non_negative_floating();
    test_is_num_cor_negative_floating1();
    test_is_num_cor_negative_floating2();
}

void all_test_num_or_var()
{
    test_is_var_or_num_not_number1();
    test_is_var_or_num_not_number2();
    test_is_var_or_num_not_number3();
    test_is_var_or_num_not_number4();
    test_is_var_or_num_too_long();
    test_is_var_or_num_not_variable1();
    test_is_var_or_num_not_variable2();
    test_is_var_or_num_not_variable3();
    test_is_var_or_num_not_variable4();
    test_is_var_or_num_correct_variables();
    test_is_var_or_num_cor_non_negative_integer();
    test_is_var_or_num_cor_negative_integer();
    test_is_var_or_num_cor_non_negative_floating();
    test_is_var_or_num_cor_negative_floating1();
    test_is_var_or_num_cor_negative_floating2();
}

void all_test_is_move()
{
    test_is_move_fail1();
    test_is_move_fail2();
    test_is_move_fail3();
    test_is_move_pass1();
    test_is_move_pass2();
    test_is_move_pass3();
}

void all_test_mock_check_within_bounds()
{
    test_mock_check_within_program_bounds_fail1();
    test_mock_check_within_program_bounds_fail2();
    test_mock_check_within_program_bounds_pass();
}

void all_test_mock_polish()
{
    test_mock_polish_no_end_character();
    test_mock_polish_incor1();
    test_mock_polish_incor2();
    test_mock_polish_incor3();
    test_mock_polish_incor4();
    test_mock_polish_cor1();
    test_mock_polish_cor2();
    test_mock_polish_cor3();
    test_mock_polish_cor4();
    test_mock_polish_cor5();
}

void all_test_mock_set()
{
    test_mock_set_incor1();
    test_mock_set_incor2();
    test_mock_set_incor3();
    test_mock_set_incor4();
    test_mock_set_incor5();
    test_mock_set_cor1();
    test_mock_set_cor2();
    test_mock_set_cor3();
    test_mock_set_cor4();
    test_mock_set_cor5();
}

void all_test_mock_do_from_to()
{
    test_mock_do_from_to_fail1();
    test_mock_do_from_to_fail2();
    test_mock_do_from_to_fail3();
    test_mock_do_from_to_fail4();
    test_mock_do_from_to_fail5();
    test_mock_do_from_to_fail6();
    test_mock_do_from_to_fail7();
    test_mock_do_from_to_pass1();
    test_mock_do_from_to_pass2();
    test_mock_do_from_to_pass3();
    test_mock_do_from_to_pass4();
}

void all_test_mock_instruction()
{
    test_mock_instruction_fail1();
    test_mock_instruction_fail2();
    test_mock_instruction_fail3();
    test_mock_instruction_pass_fd();
    test_mock_instruction_pass_lt();
    test_mock_instruction_pass_rt();
    test_mock_instruction_pass_do();
    test_mock_instruction_pass_set();
}

void all_test_mock_instruction_list()
{
    test_mock_instruction_list_fail1();
    test_mock_instruction_list_fail2();
    test_mock_instruction_list_fail3();
    test_mock_instruction_list_empty();
    test_mock_instruction_list_pass1();
    test_mock_instruction_list_pass2();
    test_mock_instruction_list_pass3();
}

void all_test_mock_parser_program()
{
    test_mock_parser_program_main_incor1();
    test_mock_parser_program_main_incor2();
    test_mock_parser_program_main_incor3();
    test_mock_parser_program_main_incor_empty_file();
    test_mock_parser_program_main_pass();
}

void all_test()
{
    all_test_str_name();
    all_test_is_op();
    all_test_a_variable_name_flags();
    all_test_is_var();
    all_test_is_negative_return_value();
    all_test_more_than_one_decimal_or_negative();
    all_test_is_num();
    all_test_num_or_var();
    all_test_is_move();
    all_test_mock_check_within_bounds();
    all_test_mock_polish();
    all_test_mock_set();
    all_test_mock_do_from_to();
    all_test_mock_instruction();
    all_test_mock_instruction_list();
    all_test_mock_parser_program();
}