#include <unity.h>

#include "helpers/str_modifiers.h"
#include "helpers/serial.h"

void test_left_zeros_lt(void) {
    int number = 42;
    int format_places = 1;
    String expected = "42";
    String actual = lzeros(number, format_places);

    TEST_ASSERT_EQUAL_STRING(expected.c_str(), actual.c_str());
}

void test_left_zeros_eq(void) {
    int number = 42;
    int format_places = 2;
    String expected = "42";
    String actual = lzeros(number, format_places);

    TEST_ASSERT_EQUAL_STRING(expected.c_str(), actual.c_str());
}

void test_left_zeros_gt(void) {
    int number = 42;
    int format_places = 3;
    String expected = "042";
    String actual = lzeros(number, format_places);

    TEST_ASSERT_EQUAL_STRING(expected.c_str(), actual.c_str());
}

void test_n_chars(void) {
    char chracter = 'a';
    int repetitions = 2;
    String expected("aa");
    String actual = n_chars(chracter, repetitions);

    TEST_ASSERT_EQUAL_STRING(expected.c_str(), actual.c_str());
}

void setup() {}

void loop() {
    UNITY_BEGIN();    
    RUN_TEST(test_left_zeros_gt);
    RUN_TEST(test_left_zeros_eq);
    RUN_TEST(test_left_zeros_lt);
    RUN_TEST(test_n_chars);
    UNITY_END(); 
}
