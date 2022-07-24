#include<stdio.h>

int main()
{
    foo();
}

int foo()
{
    printf("foo\\n");
    bar();
}

int bar()
{
    printf("bar\\n");
}
