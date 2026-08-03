#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int attempts = 0;
    int guess = 0;
    srand(time(NULL));
    int target = rand() % 100 + 1;

    printf("=== Number Guessing Game (1-100) ===\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target)
        {
            printf("Too low! \n");
        }
        else if (guess > target)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", target, attempts);
        }
    } while (guess != target);

    return 0;
}















    
