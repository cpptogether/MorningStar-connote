MorningStar-connotes
====================

A simple C++17 project for managing simple text notes in console.

Written specially for MorningStar project.

Build
-----

This project requires at least CMake 3.17, as the rule of thumb is do not use the ancient CMake versions as the more modern CMake, the more usable it will become.
Althrough you can patch the CMakeLists.txt at line 1 to lower minimum version, but it is not recommended as the CMake had changed some convenient defaults
(and had modernized the command line interface, see example below how to build).

The modern CMake could build the project using this simple command:

```sh
cmake -S . -B build && cmake --build build
```

License
-------

GNU General Public License v2 or later.
The library part is redistributed as GNU Lesser General Public License v2 or later.

