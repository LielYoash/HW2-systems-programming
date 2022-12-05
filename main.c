#include<stdio.h>
#include "my_math.h"


int main() {

    char choosen_fun;

    while (1) {
        printf("Please choose a function:\n A - to enter weights\n B - check if there is a path between 2 nodes\n C - find shortest path\n D - stop running current function\n");
        scanf("%c", &choosen_fun);

        switch (choosen_fun) {
            case 'A':
                scan();
                break;
            case 'B':
                pathExist();
                break;
            case 'C':
                shortestPath();
                break;
            case 'D':
                stop();
                break;
            default:
                printf("unvalid input. try again");
        }

    }
}
