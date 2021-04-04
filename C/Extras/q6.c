#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    std::string str;
    int i, t, n, k, c, d;
    char ch;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &k);
        char str[n];
        scanf("%s", str);
        c = '*';
        for (i = 0; str[n]; i++)
        {
            if (current == c)
        }
    }
}

int occurrences_char(string str, int length, int n, char ch)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    int occ = n / length;
    count = count * occ;
    for (int i = 0; i < n % length; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}