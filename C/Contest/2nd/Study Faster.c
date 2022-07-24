#include <stdio.h>
int main ()
{

    int X, T;
    //taking user input
    scanf("%d %d", &T, &X);
    float area = (float)T/X;
    printf("%.10f\n", area);

    return 0;
}
