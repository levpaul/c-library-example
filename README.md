### Sample C Library

This is a sample repo to mess around with compiling C libraries in one for or another.

Currently has a single library, `math` with a very basic API.

Makefile has targets `math` and `all`, to compile both the math library and main, run:

```
make
```

From there you can simply run `./main` to execute the main bin.

### libmath.so

The `make math` target compiles the math "library" into a `.so` file and places it next to the main binary. You will need to export `LD_LIBRARY_PATH=.` to execute the main binary with the fresh `libmath.so`

### Requirements

- gcc
- make

### Notes

- Makefile support is not good - it basically has direct gcc commands
- This is not a serious project and you definitely shouldn't use this as an example for doing anything in production