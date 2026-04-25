#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

struct game {

    char store[50];
};
int main() {

    int n;
    int d = 0;
    int c = 0;
    struct game arr[3];
    strcpy(arr[0].store, "STONE");
    strcpy(arr[1].store, "PAPER");
    strcpy(arr[2].store, "SCISSOR");

    srand(time(0));
    
    printf("\tWELCOME TO THE GAME");
    printf("\nEnter the rounds to be played : ");

    scanf("%d", &n);

    for (int i = 0 ; i < n ; i++) {

        int a = i;
        int x;
        int randnum;

        printf("\n\tCHOOSE ANY ONE");
        printf("\n1. STONE");
        printf("\n2. PAPER");
        printf("\n3. SCISSOR");
        printf("\nEnter your Choice : ");

        scanf("%d", &x);

            randnum = rand() % 3;


        char *botchoice;
        botchoice = arr[randnum].store;
        printf("\n\tBOT Chooses : %s", botchoice);

        if ((x == 1 && randnum == 2) || (x == 2 && randnum == 0) || (x == 3 && randnum == 1)) {
            d++;
            printf("\n\t\tYou Won");
            printf("\n\tYour Score : %d | Bot Score : %d\n", d , c);

        } else if ((x == 1 && randnum == 0) || (x == 2 && randnum == 1) || (x == 3 && randnum == 2)) {
            printf("\n\t\tDraw\n");
            i--;
            continue;

        }else {
            c++;
            printf("\n\t\tYou Lost");
            printf("\n\tYour Score : %d | Bot Score : %d\n", d , c);
        }
    }
    if (d > c) {
        printf("\n");
        printf("\n\tYOU WON THE MATCH");
    } else if (d == c){
        printf("\n");
        printf("\n\tDRAW");
    }else{
        printf("\n");
        printf("\n\tYOU LOSS THE MATCH");
        printf("\n\tBOT WON THE MATCH");
    }
    return 0;
}
