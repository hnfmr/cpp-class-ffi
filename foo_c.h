#ifndef FOO_C_H_
#define FOO_C_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct foo foo;

foo* foo_ctor(int a);

void foo_dtor(foo* f);

int foo_get(foo* f);

#ifdef __cplusplus
}
#endif

#endif
