/* Author: Anand Tripathi
   Purpose: this program is going to play guess the number
   */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // fot random number generator seed

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int NumberOfGuesses;
    time_t t;

    // Initialization of random number generator
    srand((unsigned) time(&t));

    // Get the random number
    randomNumber = rand() %21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you mush guess.\n");

    for(NumberOfGuesses = 5; NumberOfGuesses > 0; --NumberOfGuesses)
    {
// I’m going to say if number of guesses equal 1, then(?) set number of guesses equal to y else(:) set it to ies.
        printf("\nYou have %d of tr%s left.", NumberOfGuesses, NumberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == randomNumber)
        {
            printf("\nCongratulation. You guessed it!");
            return;
        }
        else if(guess < 0 || guess > 20) // checking for an invalid guess
        {
            printf("I said the number is between o and 20.\n");
        }
        else if(randomNumber > guess)
        {
            printf("Sorry, %d is wrong. My number is greater then that.\n", guess);
        }
        else if(randomNumber < guess)
        {
            printf("Sorry, %d is wrong. My number is less then that.\n", guess);
        }
    }
            printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

    return 0;
}
