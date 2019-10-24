/*
Scrivete un programma che legga una sequenza di al massimo 100 date, nella forma dd/mm/yyyy, terminata dalla
data 00/00/0000, che non è considerata parte della sequenza, e da un ultima data DD/MM/YYYY. Il programma
deve stampare solo le date precedenti alla data DD/MM/YYYY.
Memorizzate le date in un array di strutture, ciascuna con tre membri chiamati giorno, mese, anno.s
Suggerimento: per stampare un intero con esattamente due cifre (eventualmente preceduto da zeri), dovete usare
la specifica di formato %02d.
*/

#include <stdio.h>

#define MAX 100

typedef struct {
  int giorno;
  int mese;
  int anno;
} data;

int main(void)
{
  data date_list[MAX] = {0};
  int i;

  for (i = 0; i < MAX; i++) {
    scanf("%d/%d/%d", &date_list[i].giorno, &date_list[i].mese,
          &date_list[i].anno);

    if (date_list[i].giorno == 0 && date_list[i].mese == 0
        && date_list[i].anno == 0)
      break;
  }

  for (int j = 0; j < i - 1; j++) {
    if (date_list[j].anno < date_list[i - 1].anno) {
      printf("%02d/%02d/%04d\n", date_list[j].giorno, date_list[j].mese,
             date_list[j].anno);
    } else if (date_list[j].anno == date_list[i - 1].anno) {
      if (date_list[j].mese < date_list[i - 1].mese)
        printf("%02d/%02d/%04d\n", date_list[j].giorno, date_list[j].mese,
               date_list[j].anno);
      else if (date_list[j].mese == date_list[i - 1].mese) {
        if (date_list[j].giorno < date_list[i - 1].giorno)
          printf("%02d/%02d/%04d\n", date_list[j].giorno, date_list[j].mese,
                 date_list[j].anno);
      }
    }
  }

  return 0;
}
