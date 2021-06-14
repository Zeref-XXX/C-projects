#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 +1;
    // printf(" the  Ranodom no. is %d\n ",number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please \n");
        }
        else if(guess<number){
            printf("Higher number please \n");
        }
        else{
        printf("you guessed in %d attempts",nguess);
        }nguess++;
    }while(guess!=number);
    return 0;
}