# cpplox

This is a work in progress based on Crafting Interpreters by Robert Nystrom. The first intepreter in the book is written in Java; this one will be written in C++.

## Testing

The tests are written in C++ using the [GoogleTest framework](https://github.com/google/googletest). We are specifically using [version 1.11.0](https://github.com/google/googletest/releases/tag/release-1.11.0).

Right now, to keep things simple, we install GoogleTest using the recommended steps in the [CMake quickstart page](https://google.github.io/googletest/quickstart-cmake.html#set-up-a-project).

The idea is (at least for now) to have a test executable for each library in this repository. Each library corresponds to one stage in the compilation pipeline.


## Version

0.1.0
