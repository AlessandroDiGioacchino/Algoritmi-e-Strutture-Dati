/*
Scrivete un programma che legga una sequenza di caratteri (terminata da un a-capo) e la ristampi identica ma
saltando tutte le occorrenze dell’ultimo carattere. Potete assumere che la sequenza contenga al più 100 caratteri.
Ad esempio, se il programma riceve da standard input il testo
La vispa Teresa avea tra l’erbetta a volo sorpresa gentil farfalletta
l’output deve essere
L visp Teres ve tr l’erbett \ volo sorpres gentil frfllett
*/

#include <stdio.h>

int main(void)
{
  char c, string[100];
  int i = 0, len;

  while ((c = getchar()) != '\n') {
    string[i] = c;
    i++;
  }

  string[i] = '\0';

  len = i;
  c = string[--i];

  for (int j = 0; j < len; j++) {
    if (string[j] != c)
      putchar(string[j]);
    else if (string[j - 1] == ' ' && string[j + 1] == ' ')
    // Questo controllo non va bene, per esempio quando l'ultimo carattere è 'a'
    // e una parola è formata solo da 'a'
    // Consiglio di Dario: separa le parole e, se ottieni una parola che
    // contenga il solo carattere da eliminare, sostituiscila con '\'
    // Comunque il testo non richiede esplicitamente di farlo.
      putchar('\\');
  }

  printf("\n");

  return 0;
}
