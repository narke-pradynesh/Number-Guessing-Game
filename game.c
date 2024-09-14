#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, attempts = 0;
    number = rand() % 10 + 1;

    printf("Welcome to the Random Number Guessing Game!\n");
    printf("I have selected a number between 1 and 10.\n");

    // Game loop
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) 
        {
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) 
        {
            printf("Too low! Try again.\n");
        } else 
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
