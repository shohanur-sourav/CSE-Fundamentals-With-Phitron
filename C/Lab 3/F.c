#include<stdio.h>

int main()
{
    long long int n;
    int lucky = 0;

    scanf("%lld",&n);

    while(n)
    {
        if(n % 10 == 7 || n % 10 == 4)
            lucky++;

        n = n / 10;
    }

    if(lucky == 7 || lucky == 4)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
