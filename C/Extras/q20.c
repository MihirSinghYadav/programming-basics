#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int arr[n];
        scanf("%d", arr);
        for ()
    }
}
int isConsecutive(int str[])
{
    int start;
    int length = str.size();

    // find the number till half of the string
    for (int i = 0; i < length / 2; i++)
    {

        // new string containing the starting
        // substring of input string
        string new_str = str.substr(0, i + 1);

        // converting starting substring into number
        int num = atoi(new_str.c_str());

        // backing up the starting number in start
        start = num;

        // while loop until the new_string is
        // smaller than input string
        while (new_str.size() < length)
        {

            // next number
            num++;

            // concatenate the next number
            new_str = new_str + to_string(num);
        }

        // check if new string becomes equal to
        // input string
        if (new_str == str)
            return start;
    }

    // if string doesn't contains consecutive numbers
    return -1;
}