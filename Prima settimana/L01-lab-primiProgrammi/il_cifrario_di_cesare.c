#include <ctype.h>
#include <stdio.h>

int main() {
  // Dichiarare c come char causa overflow se si supera 122 o 123 sommandole k

  short int c, k;
  scanf("%d ", &k);

  for ( ; ; ) {
    c = getchar();
    if (c == '.') {
      break;
    }

    if (islower(c)) {
      c += k;

      if (122 < c) {
        c -= 26;
      }
    } else if (isupper(c)) {
      c += k;

      if (90 < c) {
        c -= 26;
      }
    }

    printf("%c", c);
  }


  printf("\n");
  return 0;
}
