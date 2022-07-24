#include <stdio.h>
#include <stdbool.h>

bool check_array(int numberArray[100], int n)
{
    int oneToN[10000];
    int checkNumber = 1;
    for(int j=0; j<n; j++)
    {
        oneToN[j] = j+1;
    }

    for(int j=0; j<n; j++)
    {
        int countNumber = 0;
        for(int i=0; i<n; i++)
        {
            if(numberArray[j]==oneToN[i])
            {
                countNumber = 1;
                break;
            }
        }
        if (countNumber==0)
        {
            checkNumber = 0;
            break;
        }
    }
    if (checkNumber==1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    bool check;
    int i, j, n, numberArray[100], oneToN[100];
    printf("Length of the array: ");
    scanf("%d", &n);

    for(j=0; j<n; j++)
    {
        scanf("%d", &numberArray[j]);
    }

    check = check_array(numberArray, n);
    if (check==true)
    {
        printf("True\n");
    }
    else if (check==false)
    {
        printf("False\n");
    }


    return 0;
}
