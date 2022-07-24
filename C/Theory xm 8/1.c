#include<stdio.h>

make_sum(float num1, float num2)
{

    float sum;

    sum = num1 + num2;

    return sum;
}

int main()
{

    float number1= 10.0, number2= 20.0, result;

    result = make_sum(number1, number2);

    printf("Sum = %f\n",result);

    return 0;
}
