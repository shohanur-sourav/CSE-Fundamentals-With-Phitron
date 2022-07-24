#include <stdio.h>
int main ()
{

    int a, b, h, area;
    //taking user input
    scanf("%d %d %d", &a, &b, &h);
    area = ((a+b)*h)/2;
    printf("%d\n", area);

    return 0;
}
