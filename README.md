Minichallenge Flood Fill
===========================

This is C++ code for the Flood Fill minichallenge.

`Minichallenge.cpp` has a buggy implementation of the Flood Fill problem. Identify and fix all the defects.

## Prerequisites

This codebase uses CppUTest to run unit tests. You will need to compile the library in order to make it work. 
If you have another workflow you feel comfortable with feel free to use that instead.

Run the following commands to get the code up and running.

```
sudo apt install gcc make autotools-dev
git submodule add https://github.com/cpputest/cpputest.git
cd cpputest
autoreconf . -i
./configure
make tdd
cd ..
export CPPUTEST_HOME=$PWD/cpputest/
make all
```

## Running

* To run the unit tests `make all`
