#include <bits/stdc++.h>
using namespace std;

char maxRepeating(string str, int *count)
{
    int n = str.length();
    int count;
    count = *count;
    char res = str[0];
    int cur_count = 1;

    for (int i = 0; i < n; i++)
    {

        if (i < n - 1 && str[i] == str[i + 1] && str[i] == '*')
            cur_count++;
        else
        {
            if (cur_count > count)
            {
                count = cur_count;
                res = str[i];
            }
            cur_count = 1;
        }
    }

    return count;
}
char maxRepeating(string str, int count);
int main()
{
    int count = 0;
    string str = "aaa*ab**ba***accde";
    cout << maxRepeating(str, &count);
    cout << count;
    return 0;
}