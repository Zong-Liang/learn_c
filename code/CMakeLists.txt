cmake_minimum_required(VERSION 3.27)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(01_hello_c chapter_01/01_hello_c.c)

add_executable(01_print_datatype_scope chapter_03/01_print_datatype_scope.c)

add_executable(02_mixed_operations chapter_03/02_mixed_operations.c)

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
