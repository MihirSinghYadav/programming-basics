#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    /*user rolls 3 dice print out their total to them dice a +dice b and + dice c
   after it get the sum user look at it and then guesses if the next roll is going to be higher
   if it is they will press h and press enter  l if it is lower and s if it is the same press enter
    roll again if the is  guess right print out good job if wrong you suck */

    int dice1;
    int dice2;
    int dice3;
    int sum, sum1;
    char guess;
    srand(time(0));

    dice1 = (rand() % 6 + 1);
    dice2 = (rand() % 6 + 1);
    dice3 = (rand() % 6 + 1);

    sum = dice1 + dice2 + dice3;

    printf("The sum of the three rolls is %d \n", sum);

    printf("Guess whether the sum of the next dice roll is going to be Higher or lower or the same by typing (h/l/s) respectively  ");
    scanf(" %c", &guess);

    dice1 = (rand() % 6 + 1);
    dice2 = (rand() % 6 + 1);
    dice3 = (rand() % 6 + 1);

    sum1 = dice1 + dice2 + dice3;

    switch (guess)
    {

    case 'h':
        if (sum1 > sum)
        {
            printf("good job it was higher \n");
        }
        if (sum1 < sum)
        {
            printf("You didnt guess right the correct guess was lower\n");
        }

        if (sum1 == sum)
        {
            printf("You didnt guess right the correct guess was the same \n");
        }
        break;

        break;
    case 'l':
        if (sum1 < sum)
        {
            printf("good job it was lower\n");
        }
        if (sum1 > sum)
        {
            printf("You didnt guess right the correct guess was higher\n");
        }

        if (sum1 == sum)
        {
            printf("You didnt guess right the correct guess was the same\n");
        }

        break;

    case 's':
        if (sum1 == sum)
        {
            printf("good job it was the same\n");
        }
        if (sum1 < sum)
        {
            printf("You didnt guess right the correct guess was lower\n");
        }

        if (sum1 > sum)
        {
            printf("You didnt guess right the correct guess was higher\n");
        }

        break;

    default:
        printf("you suck you didnt enter (h/l/s) \n");
    }

    printf("\n The first Roll sum: %d and second rolled sum : %d \n", sum, sum1);

    return 0;
}