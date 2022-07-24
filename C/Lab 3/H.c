#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int d;
    scanf("%d %d", &n, &d);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[(i + d) % n]);
    }
    puts("");

    return 0;
}
