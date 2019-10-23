#define BORDER 2
#define LONG_MONTH 31
#define LONG_SPACE_NUM 4
#define MONTH 30
#define SHORT_MONTH 28
#define SHORT_SPACE_NUM 3

#include <stdio.h>

int main() {
  int begin_day, month_num;

  printf("Inserisci il numero del mese (1 = gennaio, ..., 12 = dicembre): ");
  scanf("%d", &month_num);
  printf("Inserisci il giorno di inizio mese (1 = lunedì, ..., 7 = domenica): ");
  scanf("%d", &begin_day);
  begin_day--;

  if (month_num < 1 || 12 < month_num || begin_day < 1 || 7 < begin_day) {
    printf("\n---Errore---\n");
    return -1;
  }

  for (int i = 0; i < BORDER; i++) {
    printf(" ");
  }

  printf("L    M    M    G    V    S    D\n");

  for (int i = 0; i < BORDER; i++) {
    printf(" ");
  }

  for (int i = 0; i < begin_day; i++) {
    for (int j = 0; j < LONG_SPACE_NUM; j++) {
      printf(" ");
    }
    printf(" ");
  }

  if (month_num == 1 || month_num == 3 || month_num == 5 || month_num == 7 || month_num == 8 || month_num == 10 || month_num == 12) {
    for (int i = 1; i < LONG_MONTH + 1; i++) {
      printf("%d", i);

      if (1 <= i && i <= 9) {
        for (int j = 0; j < LONG_SPACE_NUM; j++) {
          printf(" ");
        }
      } else if (10 <= i && i <= 31) {
        for (int j = 0; j < SHORT_SPACE_NUM; j++) {
          printf(" ");
        }
      }

      if ((i + begin_day) % 7 == 0) {
        printf("\n");
        for (int i = 0; i < BORDER; i++) {
          printf(" ");
        }
      }
    }
  } else if (month_num == 4 || month_num == 6 || month_num == 9 || month_num == 11) {
    for (int i = 1; i < MONTH + 1; i++) {
      printf("%d", i);

      if (1 <= i && i <= 9) {
        for (int j = 0; j < LONG_SPACE_NUM; j++) {
          printf(" ");
        }
      } else if (10 <= i && i <= 31) {
        for (int j = 0; j < SHORT_SPACE_NUM; j++) {
          printf(" ");
        }
      }

      if ((i + begin_day) % 7 == 0) {
        printf("\n");
        for (int i = 0; i < BORDER; i++) {
          printf(" ");
        }
      }
    }
  } else if (month_num == 2) {
    for (int i = 1; i < SHORT_MONTH + 1; i++) {
      printf("%d", i);

      if (1 <= i && i <= 9) {
        for (int j = 0; j < LONG_SPACE_NUM; j++) {
          printf(" ");
        }
      } else if (10 <= i && i <= 31) {
        for (int j = 0; j < SHORT_SPACE_NUM; j++) {
          printf(" ");
        }
      }

      if ((i + begin_day) % 7 == 0) {
        printf("\n");
        for (int i = 0; i < BORDER; i++) {
          printf(" ");
        }
      }
    }
  }

  printf("\n");
  return 0;
}
