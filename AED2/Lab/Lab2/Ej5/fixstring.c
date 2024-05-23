#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

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
        for (unsigned int i = 0; i < fstring_length(s1); i++)
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
    for (unsigned int i = 0; i < fstring_length(s1); i++)
    {
        if (s2[i] > s1[i])
        {
            return true;
        }
        else if (s1[i] > s2[i])
        {
            return false;
        }
    }
    return false;
}

void fstring_set(fixstring s1, const fixstring s2) 
{
   
    int i = 0;
   
    while (i < FIXSTRING_MAX && s2[i] != '\0') 
    {
        s1[i] = s2[i];
        i++;
    }
  
    s1[i] = '\0';
}

void fstring_swap(fixstring s1,  fixstring s2) 
{
    fixstring aux;
    fstring_set(aux, s1);
    fstring_set(s1, s2);
    fstring_set(s2, aux);  
}


