#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k, n, count = 0, temp = 0;
        scanf("%d %d", &n, &k);
        char a[n];
        scanf("%s", a);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '*')
            {
                int j = 0;
                while (a[i + j] == '*')
                {
                    temp++;
                    j++;
                }
            }
            if (temp != k)
            {
                temp = 0;
            }
            else
            {
                printf("\nYES");
                break;
            }
        }
        if (temp == 0)
        {
            printf("\nNO");
        }
    }
    return 0;
}
