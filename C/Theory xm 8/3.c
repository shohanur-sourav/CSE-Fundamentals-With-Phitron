
#include <stdio.h>

int count_zero(char str[1000], char ch) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
  return count;
}

int main() {
    char str[1000], ch='0';

    printf("Enter a binary string: ");
    scanf("%s",str);

    int result = count_zero(str, ch);
    printf("Count of %c = %d", ch, result);
    return 0;
}
