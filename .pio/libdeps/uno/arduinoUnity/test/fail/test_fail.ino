#include<arduinoUnity.h>

#ifdef UNITY
void test_fail() {
    TEST_ASSERT(false);
}

void setup() {
    UNITY_BEGIN();    // IMPORTANT LINE!
}

void loop() {
    RUN_TEST(test_fail);
    UNITY_END(); // stop unit testing
}
#endif
