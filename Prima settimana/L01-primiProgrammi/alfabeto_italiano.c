#include <ctype.h>
#include <stdio.h>

int main() {
  char c, cpp;

  scanf("%c", &c);

  cpp = tolower(c);

  if (cpp == 97 || cpp == 101 || cpp == 105 || cpp == 111 || cpp == 117) {
    printf("%c è una vocale\n", c);
  } else if (cpp < 97 || 122 < cpp) {
    printf("%c non è\n", c);
  } else {
    printf("%c è una consonante\n", c);
  }

  return 0;
}
