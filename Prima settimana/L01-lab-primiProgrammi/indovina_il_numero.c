/*
Il gioco Indovina il numero funziona come segue: un giocatore A pensa a un numero intero x (con 0 ≤ x ≤
1000), e l’altro giocatore, B, lo deve indovinare. Per farlo, B pone domande del tipo “Il numero è y?”, cui A
può rispondere = (per indicare che il numero è stato indovinato), oppure < (per indicare che x è minore del
numero y), oppure > (per indicare che x è maggiore del numero y).
Scrivete un programma che giochi come giocatore B, seguendo questa strategia: gli estremi entro cui può
stare il valore da indovinare vengono memorizzati in due variabili che verranno aggiornate ad ogni rispo-
sta dell’utente; ogni volta, il programma chiede se il valore è quello in mezzo all’intervallo e, a seconda
della risposta dell’utente, il programma esce oppure modifica i valori di un estremo in modo da restringere
l’intervallo.
Per la lettura delle risposte dell’utente giocatore A si consiglia di usare la funzione scanf con questa
specifica di formato: " %c" (con uno spazio prima di %c).
*/

#include <stdio.h>

int main() {
  char c;
  int max = 1000;
  int min = 0;
  int x;

  while (c != '=') {
    printf("Il numero è %d? ", ((max - min) / 2) + min);
    scanf(" %c", &c);

    switch (c) {
      case '<':
      max = ((max - min) / 2) + min;
      break;
      case '>':
      min = ((max - min) / 2) + min;
      break;
    }
  }

  return 0;
}
