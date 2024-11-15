#include <stdio.h>

int main()
{
    printf("        ROCK PAPER SCISSORS GAME\n");
    printf("        ------------------------\n");
    printf("Enter 1 for Rock\nEnter 2 for Paper\nEnter 3 for Scissors\n");
    int user, comp;
    char ans = 'y';
    while (ans == 'y')
    {
        printf("Enter your choice:\n");
        scanf("%d", &user);
        comp = rand() % 99 + 0;
        if (comp <= 0 && comp <= 33)
        {
            comp = 1;
        }
        else if (comp > 33 && comp <= 66)
        {
            comp = 2;
        }
        else if (comp > 66 && comp <= 100)
        {
            comp = 3;
        }
        if (user == comp)
        {
            printf("It's a draw!\n");
        }
        else if (user == 1 && comp == 2)
        {
            printf("Computer wins!\n");
        }
        else if (user == 1 && comp == 3)
        {
            printf("You win!\n");
        }
        else if (user == 2 && comp == 1)
        {
            printf("You win!\n");
        }
        else if (user == 2 && comp == 3)
        {
            printf("Computer wins!\n");
        }
        else if (user == 3 && comp == 1)
        {
            printf("Computer wins!\n");
        }
        else if (user == 3 && comp == 2)
        {
            printf("You win!\n");
        }
        printf("Do you want to play again? (y/n)\n");
        scanf(" %c", &ans);
    }
    return 0;
}