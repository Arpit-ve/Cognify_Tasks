#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
  
    srand(time(0));
    secretNumber = rand() % 100 + 1; 

    printf("🎯 Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
  
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try a lower number.\n");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
