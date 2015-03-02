#include "foo.h"

foo::foo(int a) : _a(a) {}

int foo::get() const { return _a; }
