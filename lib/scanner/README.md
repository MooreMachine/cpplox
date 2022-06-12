# cpplox scanner

The idea is to have a scanner as a stand-alone component for the cpplox interpreter. If you want to build and run the scanner without the rest of the interpreter, simply compile the `scanner_example.cpp`. It has its own `CMakeLists.txt` file, but note that the target is excluded from the `ALL` target (in case you are building the whole cpplox interpreter).
