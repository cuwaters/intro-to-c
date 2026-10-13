#include <stdio.h>

int main(void)
{
    const int secret = 7;
    int guess = 0;
    printf("Guess a number between 1 and 10.\n");
    while (guess != secret)
    {
        printf("Your guess: ");
        if (scanf("%d", &guess) != 1)
        {
            printf("Please enter a whole number.\n");
            return 1;
        }
        if (guess < secret)
            printf("Too low!\n");
        else if (guess > secret)
            printf("Too high!\n");
        else
            printf("You got it!\n");
    }
    return 0;
}
