#ifndef FIXSTRING_H
#define FIXSTRING_H

#include <stdbool.h>

#define FIXSTRING_MAX 100

typedef char fixstring [FIXSTRING_MAX];

unsigned int fstring_length(fixstring s);

bool fstring_eq(fixstring s1, fixstring s2);

bool fstring_less_eq(fixstring s1, fixstring s2);

#endif