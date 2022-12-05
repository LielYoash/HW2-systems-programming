
#include <stdio.h>

int mat[10][10];
int V;

void floydWarshall();

int min(int a, int b);

void scan() {
    int x;
    printf("Please Enter the matrix sizes: ");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d ", &x);
            mat[i][j] = x;
        }
    }
    floydWarshall();
}

void pathExist() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d %d ", &i, &j);

    if (mat[i][j] == 0) {
        printf("false\n");
    } else {
        printf("true\n");
    }
}

int shortestPath() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d, %d", &i, &j);
    if (mat[i][j] ==0) {
        printf("%d", );
        return 1;
    } else {
        printf("-1");
        return 0;
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