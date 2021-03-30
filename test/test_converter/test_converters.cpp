#include <Arduino.h>
#include <unity.h>

#include <converters/fundamental.h>
#include <algebra/operands.h>
#include <algebra/operations.h>
#include <helpers/str_modifiers.h>

// --- ms2s ---
void test_ms2s_lt_quocient(void) {
    int ms = 999;
    DivisionResult expected{0, 999};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_ms2s_lt_remainder(void) {
    int ms = 999;
    DivisionResult expected{0, 999};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

void test_ms2s_eq_quocient(void) {
    int ms = 1000;
    DivisionResult expected{1, 0};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_ms2s_eq_remainder(void) {
    int ms = 1000;
    DivisionResult expected{1, 0};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);

}

void test_ms2s_gt_quocient(void) {
    int ms = 1001;
    DivisionResult expected{1, 1};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_ms2s_gt_remainder(void) {
    int ms = 1001;
    DivisionResult expected{1, 1};
    DivisionResult actual = ms2s(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

// --- s2min ---
void test_s2min_lt_quocient(void) {
    int ms = 59;
    DivisionResult expected{0, 59};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_s2min_lt_remainder(void) {
    int ms = 59;
    DivisionResult expected{0, 59};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

void test_s2min_eq_quocient(void) {
    int ms = 60;
    DivisionResult expected{1, 0};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_s2min_eq_remainder(void) {
    int ms = 60;
    DivisionResult expected{1, 0};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

void test_s2min_gt_quocient(void) {
    int ms = 61;
    DivisionResult expected{1, 1};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_s2min_gt_remainder(void) {
    int ms = 61;
    DivisionResult expected{1, 1};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

// --- min2h ---
void test_min2h_lt_quocient(void) {
    int ms = 59;
    DivisionResult expected{0, 59};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_min2h_lt_remainder(void) {
    int ms = 59;
    DivisionResult expected{0, 59};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

void test_min2h_eq_quocient(void) {
    int ms = 60;
    DivisionResult expected{1, 0};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_min2h_eq_remainder(void) {
    int ms = 60;
    DivisionResult expected{1, 0};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

void test_min2h_gt_quocient(void) {
    int ms = 61;
    DivisionResult expected{1, 1};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.quocient, actual.quocient);
}

void test_min2h_gt_remainder(void) {
    int ms = 61;
    DivisionResult expected{1, 1};
    DivisionResult actual = s2min(ms);

    TEST_ASSERT_EQUAL(expected.remainder, actual.remainder);
}

// --- ms2time ---
void test_ms2time_999_ms(void) {
    int ms = 999;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 0);
    TEST_ASSERT_EQUAL(time.min, 0);
    TEST_ASSERT_EQUAL(time.s, 0);
    TEST_ASSERT_EQUAL(time.ms, 999);
}

void test_ms2time_1_s(void) {
    int ms = 1000;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 0);
    TEST_ASSERT_EQUAL(time.min, 0);
    TEST_ASSERT_EQUAL(time.s, 1);
    TEST_ASSERT_EQUAL(time.ms, 0);
}

void test_ms2time_1_s_1_ms(void) {
    int ms = 1001;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 0);
    TEST_ASSERT_EQUAL(time.min, 0);
    TEST_ASSERT_EQUAL(time.s, 1);
    TEST_ASSERT_EQUAL(time.ms, 1);
}

void test_ms2time_59_s(void) {
    uint64_t ms = 59000;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 0);
    TEST_ASSERT_EQUAL(time.min, 0);
    TEST_ASSERT_EQUAL(time.s, 59);
    TEST_ASSERT_EQUAL(time.ms, 0);
}

void test_ms2time_1_min(void) {
    uint64_t ms = 60000;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 0);
    TEST_ASSERT_EQUAL(time.min, 1);
    TEST_ASSERT_EQUAL(time.s, 0);
    TEST_ASSERT_EQUAL(time.ms, 0);
}

void test_ms2time_1_h(void) {
    uint64_t ms = 3600000L;
    Time time = ms2time(ms);

    TEST_ASSERT_EQUAL(time.h, 1);
    TEST_ASSERT_EQUAL(time.min, 0);
    TEST_ASSERT_EQUAL(time.s, 0);
    TEST_ASSERT_EQUAL(time.ms, 0);
}

void test_stringify_time(void) {
    Time t{42, 42, 42, 42};
    String expected = String("042:42:42:042");
    String actual = stringify_time(t);

    TEST_ASSERT_EQUAL_STRING(expected.c_str(), actual.c_str());
}

void setup() {}

void loop() {
    UNITY_BEGIN();
    RUN_TEST(test_ms2s_lt_quocient);
    RUN_TEST(test_ms2s_lt_remainder);
    RUN_TEST(test_ms2s_eq_quocient);
    RUN_TEST(test_ms2s_eq_remainder);
    RUN_TEST(test_ms2s_gt_quocient);
    RUN_TEST(test_ms2s_gt_remainder);

    RUN_TEST(test_s2min_lt_quocient);
    RUN_TEST(test_s2min_lt_remainder);
    RUN_TEST(test_s2min_eq_quocient);
    RUN_TEST(test_s2min_eq_remainder);
    RUN_TEST(test_s2min_gt_quocient);
    RUN_TEST(test_s2min_gt_remainder);

    RUN_TEST(test_min2h_lt_quocient);
    RUN_TEST(test_min2h_lt_remainder);
    RUN_TEST(test_min2h_eq_quocient);
    RUN_TEST(test_min2h_eq_remainder);
    RUN_TEST(test_min2h_gt_quocient);
    RUN_TEST(test_min2h_gt_remainder);

    RUN_TEST(test_ms2time_999_ms);
    RUN_TEST(test_ms2time_1_s);
    RUN_TEST(test_ms2time_1_s_1_ms);
    RUN_TEST(test_ms2time_59_s);
    RUN_TEST(test_ms2time_1_min);
    RUN_TEST(test_ms2time_1_h);

    RUN_TEST(test_stringify_time);
    
    UNITY_END(); 
}
