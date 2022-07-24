#include<stdio.h>

int make_average(int a[10], int n)
{
    int i;
    int sum=0;
    for(i=0; i< n; i++)
    {
        sum = sum + a[i];
    }
    return(sum/n);
}

int main()
{
    int a[100], res;
    int i, n;

    printf("Enter array size:\n");
    scanf("%d", &n);

    for(i=0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    res = make_average(a,n);
    printf("Average = %d", res);

    return 0;
}

