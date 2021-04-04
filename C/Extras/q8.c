#include <stdio.h>
//https://www.youtube.com/watch?v=hdDPtz1-ymw
typedef long long ll;
int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        ll d = 0;
        d = (n / 4) * 44;
        int r = n % 4;

        if (n >= 4)
        {

            if (r == 0)
            {
                d += 16;
            }
            else if (r == 1)
            {
                d += 32;
            }
            else if (r == 2)
            {
                d += 44;
            }
            else if (r == 3)
            {
                d += 55;
            }
            printf("\n%d", d);
        }
        else
        {
            int a;
            if (r == 1)
                a = 20;
            else if (r == 2)
                a = 36;
            else if (r == 3)
                a = 51;
            printf("%d", a);
        }
    }
    return 0;
}