#include <stdio.h>

int main() {

  int num = 5;
  int * p, **q, ***r;

  p = &num;
  q = &p;
  r = &q;


  ***r = 40;

  printf("%d\n", num);

  return 0;
}
