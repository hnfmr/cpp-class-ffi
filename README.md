# cpp-class-ffi
Haskell FFI for C++ class

1. clang++ -c foo.cpp
2. clang++ -c foo_c.cpp

2. ghc -O --make ffi.hs foo.o foo_c.o -lstdc++
