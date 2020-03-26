#include <stdio.h>
#include <time.h>
#include <limits.h>
#define N 3
#define M 4
main() {
    int a[N][M], i, j, min = CHAR_MAX;;
    srand(time(NULL));
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            a[i][j] = rand() % 100;
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    for (j=0; j<M; j++) {
        min = a[0][j];
        for (i=1; i<N; i++)
            if (a[i][j] < min)
                min = a[i][j];
        printf("%5d", min);
    }
    printf("\n");
    return 0;
}
