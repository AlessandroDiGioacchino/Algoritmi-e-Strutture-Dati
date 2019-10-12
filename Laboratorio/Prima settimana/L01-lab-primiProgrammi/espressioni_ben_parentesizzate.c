#include <stdio.h>

int main() {
  char c;
  char str[100];
  int clos_count, len, open_count;
  open_count = 0;

  for (int i = 0; i < 100; i++) {
    c = getchar();
    if (c == '.') {
      len = i;
      break;
    }

    if (c == '(') {
      open_count++;
    } else if (c == ')') {
      clos_count++;
    }

    str[i] = c;
  }

  int temp1 = 0;
  int temp2 = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == '(') {
      temp1++;
    } else if (str[i] == ')') {
      temp2++;
    }

    if (temp1 < temp2) {
      printf("La stringa non è un'espressione ben parentesizzata:\n");
      printf("Carattere %d: troppe parentesi chiuse!\n", i);
      return 0;
    }
  }

  if (open_count != clos_count) {
    printf("La stringa non è un'espressione ben parentesizzata:\n");
    printf("Carattere %d: mancano parentesi chiuse alla fine!\n", len);
    return 0;
  }

  printf("La stringa è un'espressione ben parentesizzata\n");
  return 0;
}
