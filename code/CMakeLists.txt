cmake_minimum_required(VERSION 3.27)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(01_hello_c chapter_01/01_hello_c.c)

add_executable(01_print_datatype_scope chapter_03/02_print_datatype_scope.c)

add_executable(02_mixed_operations chapter_03/09_mixed_operations.c)

add_executable(01_auto_type_conversion chapter_04/01_type_conversion.c)

add_executable(02_arithmetic_operators chapter_04/02_arithmetic_operators.c)

add_executable(03_relational_operators chapter_04/03_relational_operators.c)

add_executable(04_logical_operators chapter_04/04_logical_operators.c)

add_executable(05_comma_operator chapter_04/05_comma_operator.c)

add_executable(06_compound_operator chapter_04/06_compound_operator.c)

add_executable(01_char_io chapter_05/01_char_io.c)

add_executable(02_string_io chapter_05/02_string_io.c)

add_executable(03_format_output chapter_05/03_format_output.c)

add_executable(04_format_input chapter_05/04_format_input.c)

add_executable(02_constant chapter_03/01_constant.c)

add_executable(03_variable chapter_03/03_variable.c)

add_executable(04_auto_modifier chapter_03/04_auto_modifier.c)

add_executable(05_static_modifier chapter_03/05_static_modifier.c)

add_executable(06_register_modifier chapter_03/06_register_modifier.c)

add_executable(07_extern_modifier_01 chapter_03/07_extern_modifier_01.c)

add_executable(08_extern_modifier_02 chapter_03/08_extern_modifier_02.c chapter_03/07_extern_modifier_01.c)

add_executable(07_conditional_operators chapter_04/07_conditional_operators.c)

add_executable(01_if_statement chapter_06/01_if_statement.c)

add_executable(02_switch_statement chapter_06/02_switch_statement.c)

add_executable(01_while_loop chapter_07/01_while_loop.c)

add_executable(02_do_while_loop chapter_07/02_do_while_loop.c)

add_executable(03_for_loop chapter_07/03_for_loop.c)

add_executable(04_nested_loop chapter_07/04_nested_loop.c)

add_executable(01_1d_array chapter_08/01_1d_array.c)

add_executable(02_2d_array chapter_08/02_2d_array.c)

add_executable(03_char_array chapter_08/03_char_array.c)

add_executable(04_md_array chapter_08/04_md_array.c)

add_executable(05_transpose_array chapter_08/05_transpose_array.c)

add_executable(01_function chapter_09/01_function.c)

add_executable(02_static_function chapter_09/02_static_function.c)

add_executable(03_extern_function chapter_09/03_extern_function_01.c)

add_executable(04_extern_function_02 chapter_09/04_extern_function_02.c chapter_09/03_extern_function_01.c)

add_executable(05_print_multiplication_table chapter_07/05_print_multiplication_table.c)

add_executable(06_global_variable chapter_09/06_global_variable.c)

add_executable(07_generally_used_functions chapter_09/07_generally_used_functions.c)

add_executable(05_local_variable chapter_09/05_local_variable.c)

add_executable(01_pointer chapter_10/01_print_address.c)

add_executable(01_print_address chapter_10/01_print_address.c)

add_executable(02_pointer_and_array chapter_10/02_pointer_and_array.c)

add_executable(03_point_pointer chapter_10/03_point_pointer.c)

add_executable(04_swap_value chapter_10/04_swap_value.c)

add_executable(05_return_pointer chapter_10/05_return_pointer.c)

add_executable(01_struct_type chapter_11/01_struct_type.c)
add_executable(02_union_type chapter_11/02_union_type.c)
add_executable(03_enum_type chapter_11/03_enum_type.c)
