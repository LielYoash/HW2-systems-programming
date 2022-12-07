#include <stdio.h>
//#include <malloc.h>
#include <stdlib.h>

//
//
//int mat[10][10];
#define V 10
//
//
//
//
//
//void floydWarshall();
//int min(int a, int b);
//
//int** scan() {
//    int x;
//    int** matrix = (int**)malloc(sizeof(int*)*10);
//    printf("Please Enter the matrix weights: ");
//    for (int i = 0; i < 10; ++i) {
//        matrix[i] = (int*)malloc(sizeof(int)*10);
//        for (int j = 0; j < 10; ++j) {
//            scanf("%d ", &x);
//            printf("%d\n", x);
//            matrix[i][j] = x;
//        }
//    }
//    return matrix;
//}




int mat[10][10];

void floydWarshall();

int min(int a, int b);

void scan() {
    int x;
    printf("Please Enter the matrix sizes: ");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf(" %d", &x);
            mat[i][j] = x;
        }
    }
    floydWarshall();
}

int pathExist() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d %d", &i, &j);
    if (mat[i][j] == 0) {
        return 0;
    } else {
        return 1;
    }
}

void shortestPath() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d, %d", &i, &j);
    if (mat[i][j] ==0) {
        printf("-1\n");
    } else {
        printf("%d\n", mat[i][j]);
    }


}

void floydWarshall() {
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == j)
                    mat[i][i] = 0;
                else if (i == k || j == k)
                    mat[i][j] = mat[i][j];
                else {
                    int matSum = mat[i][k] + mat[k][j];
                    if (mat[i][k] == 0 || mat[k][j] == 0)
                        matSum = 0;
                    mat[i][j] = min(mat[i][j], matSum);
                }
            }
        }
    }
}

int min(int a, int b) {
    if (a > b)
        return b;
    else
        return a;

}

void stop(){
    exit(0);
}


/*int** foo() {
    char x;
    int** matrix = (int**)malloc(10*sizeof(int*));
    printf("Please Enter the matrix weights: ");
    for (int i = 0; i < 10; ++i) {
        matrix[i] = (int*)malloc(10*sizeof(int));
        for (int j = 0; j < 10; ++j) {
            scanf("%c ", &x);
            matrix[i][j] = x;
        }
    }
    return matrix;
}*/