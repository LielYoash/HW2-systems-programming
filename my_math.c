
#include <stdio.h>

int mat[10][10];
int V;

void floydWarshall();


int scan() {
    int x, y;
    printf("Please Enter the matrix sizes: ");
    scanf("%d, %d\n", &x, &y);
    int mat[x][y];
}

int pathExist() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d, %d", &i, &j);
    int dist[i][j];
    if (floydWarshall(dist[i][j])) {
        printf("true");
        return 1;
    } else {
        printf("false");
        return 0;
    }
}

int shortestPath() {
    int i, j;
    printf("Please enter your desired path length: ");
    scanf("%d, %d", &i, &j);
    int dist[i][j];
    if (floydWarshall()) {
        printf("%d", dist[i][j]);
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
                if (mat[i][k] + mat[k][j] < mat[i][j])
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
}

}