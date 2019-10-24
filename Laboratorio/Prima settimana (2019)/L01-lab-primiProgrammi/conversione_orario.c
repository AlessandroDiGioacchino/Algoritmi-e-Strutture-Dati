/*
Scrivete un programma che, dato un orario in formato a 24 ore hh:mm, fornisca il corrispondente orario nel
formato AM/PM e viceversa. Ricordate che secondo il formato AM/PM, le 24 ore del giorno sono suddivise
in due periodi chiamati AM (ante meridiem) e PM (post meridiem): ogni periodo consiste di 12 ore numerate
con 12 (usato come 0), 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11. L’orario 12:00 AM indica la mezzanotte, l’orario
12:00 PM indica il mezzogiorno.
*/

#include <stdio.h>

int main(void) {
  short hh, mm;
  scanf("%hd:%hd", &hh, &mm);

  short outh = hh;

  if (outh != 12)
    outh %= 12;

  printf("%hd:%hd %s\n", outh, mm, hh > 11 ? "PM" : "AM");

  return 0;
}
