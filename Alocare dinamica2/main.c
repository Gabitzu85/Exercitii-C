#include <stdio.h>
#include <stdlib.h>

#define INCR 100 // cu cat creste vectorul la fiecare realocare

int main(void)
{
  int n, i, m;
  float x, *v, *tmp;                   // v = adresa vector

  n = INCR;
  i = 0;

  v = malloc(n * sizeof(float)); // Dimensiune initiala vector
  if (v == NULL) {
      /* Nu s-a reusit alocarea */
      printf("Could not allocate v\n");
      return 1;
  }

  while (scanf("%f", &x) != EOF) {
    if (i == n) {              // Daca este necesar...
      n = n + INCR;              // ... creste dimensiune vector
      tmp = realloc(v, n * sizeof(float));
      if (tmp != NULL) {
          /* Daca s-a reusit alocarea pentru noua zona de memorie */
          v = tmp;
      } else {
          /* Daca nu s-a reusit alocarea */
          break;
      }
    }

    v[i++] = x;                    // Memorare in vector numar citit
  }

  m = i;

  for (i = 0; i < m; i++) {       // Afisare vector
    printf("%f ", v[i]);
  }
  printf("\n");

  free(v);

  return 0;
}
