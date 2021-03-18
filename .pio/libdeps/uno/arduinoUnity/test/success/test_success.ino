#include<arduinoUnity.h>

#ifdef UNITY
void test_equal() {
    TEST_ASSERT_EQUAL(0, 0);
}

void setup() {
    UNITY_BEGIN();    // IMPORTANT LINE!
}

void loop() {
    RUN_TEST(test_equal);
    UNITY_END(); // stop unit testing
}
#endif
