#include <stdio.h>
#include <stdbool.h>
#include "fixstring.h"

unsigned int fstring_length(fixstring s)
{
    unsigned int length = 0;

    for (int i = 0; i < FIXSTRING_MAX; i++)
    {
        if (s[i] != '\0')
        {
            length++;
        }
        else
        {
            return length;
        }   
    }

    return 0;
}

bool fstring_eq(fixstring s1, fixstring s2)
{
    unsigned int s1Length = fstring_length(s1);
    unsigned int s2Length = fstring_length(s2);

    if (s1Length == s2Length)
    {
        for (int i = 0; i < fstring_length(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
            
        }
        
    }
    else
    {
        return false;
    }

    return true;
    
}

bool fstring_less_eq(fixstring s1, fixstring s2)
{
    printf("Viendo si '%s' va antes de '%s'\n", s1, s2);
    for (int i = 0; i < fstring_length(s1); i++)
    {
        if (s2[i] > s1[i])
        {
            printf("la '%c' va antes de la '%c', por lo tanto '%s' deberia ir antes de '%s'\n", s1[i], s2[i], s1, s2);
            return true;
        }
        else if (s1[i] > s2[i])
        {
            return false;
        }
    }
    return false;
}