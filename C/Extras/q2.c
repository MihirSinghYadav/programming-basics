#include <stdio.h>
#include <stdlib.h>
#define lli long long int
#define ld long double
//#define fastio                   \
    ios::sync_with_stdio(false); \
    scanf.tie(0);                \
    printf.tie(0);

int remove_duplicate(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int temp[n];

    int j = 0;
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

    for (i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n, m, o, p;
        scanf("%d %d", &n, &m);
        int a[n];
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
        }
        qsort(a, a + n, sizeof(int));
        n = remove_duplicate(a, n);
        // for (i=0; i<n; i++)
        // cout << a[i] << " ";
        int tot = (m) * (m + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            tot -= a[i];
        }
        if (tot > 0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}