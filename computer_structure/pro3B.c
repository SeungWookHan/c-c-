#include <stdio.h>
#include <time.h>
#define MAX 1000

int main()
{
    int w = 0;
    while (1)
    {
        if (w == 10)
            break;
        double A[MAX][MAX] = {0}, X[MAX] = {0}, y[MAX] = {0};
        int i, j;
        clock_t start1, end1;
        float res1;
        start1 = clock();
        for (j = 0; j < MAX; j++)
            for (i = 0; i < MAX; i++)
                y[i] += A[i][j] * X[j];
        end1 = clock();
        res1 = (float)(end1 - start1) / CLOCKS_PER_SEC;
        printf("B 걸린시간: %f\n", res1);
        w++;
    }
    return 0;
}