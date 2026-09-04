#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 100 + 1; // Generates 1 to 100
    int no_of_guesses = 0;
    int guessed;
    // printf("Random Number: %d\n", randomNumber);
    printf("Guess the number:\n");
    do
    {
        printf("Enter the number: ");
        scanf("%d", &guessed);
        if(guessed < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if(guessed > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        no_of_guesses++;
    } while ( guessed != randomNumber);

    printf("You guessed the number in %d guesses. " , no_of_guesses);
     return 0;
}