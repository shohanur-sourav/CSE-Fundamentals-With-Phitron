#include<stdio.h>

int main()
{
    int n = 10;
    scanf("%d",n);
    int a[n], b[n];
    for (int i=0; i<n; i++)
    {
        //Write Code Here
//        scanf("%d", &a[i])
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        printf("%d %d",a[i],b[i]);
}
    }

