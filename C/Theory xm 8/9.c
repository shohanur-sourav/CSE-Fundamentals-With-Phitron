#include <stdio.h>

int min(int a, int b){
    return (a>b)?b:a;
}

int check_palindrome(char x[], int i, int j){
    if(i>=j){
        return 0;
    }

    if (x[i] == x[j]){
        return check_palindrome(x, i + 1, j - 1);
    }

    return 1 + min(check_palindrome(x, i, j - 1), check_palindrome(x, i + 1, j));
}

int main() {

  char x[]= "abcdba";
  int n = sizeof(x) / sizeof(x[0]);

  printf("The minimum number of deletions required is %d\n", check_palindrome(x, 0, n - 2));


  return 0;
}
