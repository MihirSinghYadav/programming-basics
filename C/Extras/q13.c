#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char s[n];
        scanf("%s", s);
        int count = 0;
        int x = 0;
        for (int i = 0; i <= n; ++i)
        {
            if (s[i] == '*')
                count++;
            else
                count = 0;
            if (count > x)
                x = count;
        }
        if (x >= k)
            printf("\nYES");
        else
            printf("\nNO");
    }
    return 0;
}