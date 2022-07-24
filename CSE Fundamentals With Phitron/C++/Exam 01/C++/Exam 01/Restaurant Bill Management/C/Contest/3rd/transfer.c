#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int water_left = A-B;

    if(water_left >= C)
    {
        printf("0");
    }
    else
    {
        C -= water_left;
        printf("%d",C);
    }
    return 0;
}
