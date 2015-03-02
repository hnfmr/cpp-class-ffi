# cpp-class-ffi
Haskell FFI for C++ class

clang++ -c foo.cpp
clang++ -c foo_c.cpp

ghc -O --make ffi.hs foo.o foo_c.o -lstdc++
