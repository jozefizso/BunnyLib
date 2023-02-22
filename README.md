# BunnyLib

> Sample project for using Google Test in Xcode.



## Usage

The Google Test framework is setup using `cmake`. To manually build it,
use these commands:

```shell
cmake -S gtest -B build
cmake --build build
```

It will compile Google Test libraries to the `build/lib` folder.


The Xcode project **BunnyLib** is a C++ library with primary target _BunnyLib_
which is a standard dynamic library. Unit tests are compiled in the _BunnyTests_
target which is a command line application linked to the Google Test framework
and it will execute tests.


```shell
$ ./BunnyTests
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from HelloTest
[ RUN      ] HelloTest.BasicAssertions
[       OK ] HelloTest.BasicAssertions (0 ms)
[----------] 1 test from HelloTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```


## License

Source code is licensed under [MIT License](LICENSE.txt).
