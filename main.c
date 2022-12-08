#include<stdio.h>
#include "my_math.h"


int main() {

    char choosen_fun;

    printf("MENU:\nA - to enter weights\n B - check if there is a path between 2 nodes\n C - find shortest path\n D - stop running current function\n");
    int flag = 1;

    while (flag) {
        printf("\nPlease choose a function:");
        scanf("%c", &choosen_fun);

        switch (choosen_fun) {
            case 'A':
                scan();
                printArr();
                break;
            case 'B':
                if(pathExist()==1){
                    printf("True\n");
                }
                else{
                    printf("False\n");
                }
                break;
            case 'C':
                shortestPath();
                break;
            case 'D':
                printf("BYE!\n");
                flag = 0;
                break;
            default:
                printf("Invalid Input\n");
                break;
        }

    }
}
