/*
Scrivete un programma che, dato un orario in formato a 24 ore hh:mm, fornisca il corrispondente orario nel
formato AM/PM e viceversa. Ricordate che secondo il formato AM/PM, le 24 ore del giorno sono suddivise
in due periodi chiamati AM (ante meridiem) e PM (post meridiem): ogni periodo consiste di 12 ore numerate
con 12 (usato come 0), 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11. L’orario 12:00 AM indica la mezzanotte, l’orario
12:00 PM indica il mezzogiorno.
*/

#include <stdio.h>

int main() {
  int am, hh, mm;

  scanf("%d:%d", &hh, &mm);

  am = (12 <= hh) ? 0 : 1;

  int new_hh = hh % 12;
  if (new_hh == 0) {
    new_hh += 12;
  }

  printf("%02d:%02d ", new_hh, mm);
  if (am == 0) {
    printf("PM\n");
  } else {
    printf("AM\n");
  }

  return 0;
}
