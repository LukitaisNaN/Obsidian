#include <stdio.h>
#include "fixstring.h"

int main(int argc, char const *argv[])
{
    fixstring s1 = "abc";
    fixstring s2 = "ala";
    printf("%d\n", fstring_less_eq(s2, s1));
    
    return 0;
}
