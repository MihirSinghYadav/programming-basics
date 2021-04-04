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
        if (n > 10000)
        {
            int temp_j = 0;
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
                    temp_j = j;
                }
                if (temp == k)
                {
                    printf("\nYES");
                    break;
                }
                else
                {
                    temp = 0;
                    i += (temp_j);
                    continue;
                }
            }

            if (temp == 0)
            {
                printf("\nNO");
            }
        }
        else
        {
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
    }
    return 0;
}