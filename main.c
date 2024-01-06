#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int pOne;
int pTwo;
int pOneLives = 3;
int pTwoLives = 3;
int whoGoesFirst[2];
char choiceOne[20];
char choiceTwo[20];

int playerOne(void){
    char choice[20];

    printf("Player one, it's your turn, choose a move (ROCK, PAPER, SCISSORS)\n");
    scanf("%s", choice); // Add '&' before 'choice' to pass its address
    printf("You entered %s\n", choice);
    strcpy(choiceOne, choice);

    return 0;
}

int playerTwo(void){
    char choice[20];

    printf("Player two, it's your turn, choose a move (ROCK, PAPER, SCISSORS)\n");
    scanf("%s", choice); // Add '&' before 'choice' to pass its address
    printf("You entered %s\n", choice);
    strcpy(choiceTwo, choice);

    return 0;
}

int whoPlays(void){
    srand(time(NULL));
    for(int i=0; i < 2; i++){
        int rNum = rand();
        whoGoesFirst[i] = rNum;
    }   
    pOne = whoGoesFirst[0];
    pTwo = whoGoesFirst[1];

    if(pOne > pTwo){
        playerOne();
    }else{
        playerTwo();
    }
    return 0;
}

int logicSystem(){
    if (strcmp(choiceOne, choiceTwo) == 0) {
          printf("TIE\n");
    } else if(strcmp(choiceOne, "ROCK") == 0 && strcmp(choiceTwo, "SCISSORS") == 0){
        printf("Player one has won");
    } else if(strcmp(choiceOne, "PAPER") == 0 && strcmp(choiceTwo, "ROCK") == 0){
        printf("Player one has won");
    } else if(strcmp(choiceOne, "SCISSORS") == 0 && strcmp(choiceTwo, "PAPER") == 0){
        printf("Player one has won");
    } else if(strcmp(choiceOne, "ROCK") == 0 && strcmp(choiceTwo, "PAPER") == 0){
        printf("Player two has won");
    } else if(strcmp(choiceTwo, "ROCK") == 0 && strcmp(choiceOne, "SCISSORS") == 0){
        printf("Player two has won");
    } else if(strcmp(choiceTwo, "PAPER") == 0 && strcmp(choiceOne, "ROCK") == 0){
        printf("Player two has won");
    } else if(strcmp(choiceTwo, "SCISSORS") == 0 && strcmp(choiceOne, "PAPER") == 0){
        printf("Player two has won");
    }
    return 0;
}

int main(void) {
    playerOne();
    playerTwo();
    logicSystem();
    return 0;
}





