/*
Scrivete un programma che stampi un calendario mensile. L’utente deve specificare il nome del mese e il
giorno della settimana in cui comincia il mese. Per semplicità considerate solo anni non bisestili...
*/

#define SPACE 4
#define TAB_SIZE 2

#include <stdio.h>

int main(void) {
  int days_in_month, month, w_day;

  printf("Inserisci il numero del mese (1 = gennaio, ..., 12 = dicembre): ");
  scanf("%d", &month);

  printf("Inserisci il giorno di inizio mese (1 = lunedì, ..., 7 = domenica): ");
  scanf("%d", &w_day);

  for (int i = 0; i < TAB_SIZE; i++) {
    printf(" ");
  }

  printf("L");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("M");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("M");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("G");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("V");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("S");

  for (int i = 0; i < SPACE; i++) {
    printf(" ");
  }
  printf("D\n");

  for (int i = 0; i < TAB_SIZE; i++) {
    printf(" ");
  }

  for (int i = 0; i < (SPACE + 1) * (w_day - 1); i++) {
    printf(" ");
  }

  for (int i = 1; i < 10; i++) {
    printf("%d", i);

    for (int j = 0; j < SPACE; j++) {
      printf(" ");
    }

    if ((i + w_day - 1) % 7 == 0) {
      printf("\n");

      for (int j = 0; j < TAB_SIZE; j++) {
        printf(" ");
      }
    }
  }

  switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    days_in_month = 31;

    break;

    case 4: case 6: case 9: case 11:
    days_in_month = 30;

    break;

    case 2:
    days_in_month = 28;

    break;
  }

  for (int i = 10; i <= days_in_month; i++) {
    printf("%d", i);

    for (int j = 0; j < SPACE - 1; j++) { // 3 (= SPACE - 1) because of two-digit numbers
      printf(" ");
    }

    if ((i + w_day - 1) % 7 == 0) {
      printf("\n");

      for (int i = 0; i < TAB_SIZE; i++) {
        printf(" ");
      }
    }
  }

  printf("\n");

  return 0;
}
