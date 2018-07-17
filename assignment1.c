#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int randomNumber = rand() % 20;
    int isCorrect = 0;
    int guess;
    int counter = 0;

    printf("Guess a number between 1 and 20! ");

    do {
        scanf("%d", &guess);
        if (guess == randomNumber) {
            counter++;
            printf("You guessed correctly in %d tries...youre a genius\n", counter);
            isCorrect = 1;
        }

        if (guess < randomNumber) {
            counter++;
            printf("Your guess is too low.  ");
        }

        if (guess > randomNumber) {
            counter++;
            printf("Your guess is too high.  ");
        }
        if (counter > 7){
          printf("youve run out of moves\n" );
          break;

        }

              } while (isCorrect == 0 );

    return 0;
}
