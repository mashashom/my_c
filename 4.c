#include <stdio.h>
#include <limits.h>
#define N 3
#define M 4
int main() {
    int a[N][M]= {{1, 2, 3, 4}, {11, -12, -14, 32}, {21,23, 24, -1}}, i, j, min = CHAR_MAX;;
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    for (j=0; j<M; j++) {
        min = a[0][j];
        for (i=1; i<N; i++)
            if ((a[i][j] < min) && (a[i][j]>0))
                min = a[i][j];
        printf("%5d", min);
    }
    printf("\n");
    return 0;
}
