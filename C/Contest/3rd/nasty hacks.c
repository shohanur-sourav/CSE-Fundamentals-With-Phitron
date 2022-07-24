#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int r,e,c;
        scanf("%d %d %d", &r, &e, &c);
        if (e-c==r)
        {
            printf("does not matter\n");
        }
        else if (e-c>r)
        {
            printf("advertise\n");
        }
        else
        {
            printf("do not advertise\n");
        }

    }
    return 0;
}
