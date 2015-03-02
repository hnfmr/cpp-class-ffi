#include "foo.h"
#include "foo_c.h"

extern "C" {

foo* foo_ctor( int a ) { return new foo( a ); }

void foo_dtor(foo* f) { delete f; }

int foo_get(foo* f) { return f->get(); }
}
