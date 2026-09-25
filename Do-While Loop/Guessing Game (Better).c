#include<stdio.h>
int main(){
    int n=6;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    int outOfGuesses=0;
    do{
        if(guessCount<guessLimit){
            printf("Enter a number: ");
            scanf("%d",&guess);
            guessCount++;
        } else {
            outOfGuesses=1;
            break;
        }
    } while(guess!=n && outOfGuesses == 0);
    if(outOfGuesses == 1){
        printf("You're out of guesses!\n");
    } else {
        printf("You guessed the correct number!\n");
    }
    return 0;
} 