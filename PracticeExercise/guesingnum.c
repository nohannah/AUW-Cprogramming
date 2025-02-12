#include <stdio.h>


int main() {
    
    int guess;
    
        printf("Enter your guess (between 1 and 10): ");
        scanf("%d", &guess);

        if (guess == 5) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n");
            
        } else {

            printf("Sorry, that's not the correct number. Try again.\n");
        }


    return 0;
}
