#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
const int SZ = 1000;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class very_long
{
private:
    char vlstr[SZ];
    int vlen;
    very_long multdigit(const int) const;
    very_long mult10(const very_long) const;

public:
    very_long() : vlen(0)
    {
        vlstr[0] = '\0';
    }
    very_long(const char s[SZ])
    {
        strcpy(vlstr, s);
        vlen = strlen(s);
    }
    very_long(const unsigned long n)
    {
        ltoa(n, vlstr, 10);
        strrev(vlstr);
        vlen = strlen(vlstr);
    }
    void putvl() const;
    void getvl();
    very_long operator+(const very_long);
    very_long operator*(const very_long);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
