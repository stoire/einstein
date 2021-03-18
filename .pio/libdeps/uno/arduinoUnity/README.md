A testing library based on the [Unity framework](http://www.throwtheswitch.org/unity/). For coding guides see the [examples](https://gitlab.com/BlackEdder/arduinoUnity/tree/master/test/fail) under the test directory and the Unity homepage. 

The library allows you to specify tests, then upload it to your arduino and the result of the test will be shown on the serial port. The easiest way to do this is by using [platformio](http://platformio.org/). For example the `test/fail/test_fail.ino` can be run using:

```
pio run -d test/fail/ -t upload; pio device monitor -b 115200
```
