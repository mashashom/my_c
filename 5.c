#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5

int main()
{
    int A[M][N] = {{1, 6, 5, 9, 12}, {11, 12, 92, 32,18}, {21,23, 27, 19, 61},{35, 8, 75, 4, 5}, {7, 11, 60, 32,1}};
    int i, j, k = 0;

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%3d", A[i][j]);
        }
    printf("\n");
    }
for (j = 0; j < N; j++){
        for (i = 0; i < M; i++){
            if (A[i][j] % 2 == 1){
                k++;
            }
        if (k == M){
                printf("\n");
                for(i = 0; i < M; i++)
                    printf("%d\n", A[i][j]);
                return 0;
            }
        }
        k = 0;
    }
    return 0;
}
