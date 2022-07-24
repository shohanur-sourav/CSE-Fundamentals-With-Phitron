//#include <stdio.h>
//
//int odd_even(int num)
//{
//    return !(num & 1);
//}
//
//int main()
//{
//    int num;
//
//    printf("Enter any number: ");
//    scanf("%d", &num);
//
//    if(odd_even(num))
//    {
//        printf("The number is even.");
//    }
//    else
//    {
//        printf("The number is odd.");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//void odd_even(int num)
//{
//
//    printf("Enter any number: ");
//    scanf("%d", &num);
//
//    if(num)
//    {
//        printf("The number is even.");
//    }
//    else
//    {
//        printf("The number is odd.");
//    }
//}
//
//int main()
//{
//    int num;
//
//    odd_even(num);
//
//    return 0;
//}
//#include <stdio.h>
//
//int odd_even()
//{
//    int num;
//    printf("Enter any number: ");
//    scanf("%d", &num);
//
//
//    return !(num & 1);
//}
//
//int main()
//{
//    int num;
//
//    if(odd_even(num))
//    {
//        printf("The number is even.");
//    }
//    else
//    {
//        printf("The number is odd.");
//    }
//
//    return 0;
//}
#include <stdio.h>

void odd_even(void)
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num % 2 == 0 )
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

}

int main()
{
    int num;
    odd_even();
    return 0;
}
