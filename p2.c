#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char* argv[]) {

  char stringInput[12];
  
  printf("Numero final no mayor a 12 cifras (empezando de 1): ");
  fgets (stringInput, 12, stdin);

  int limitNumber = atoi(stringInput);

  if (limitNumber < 1) {
    printf("Debe ingresar un número positivo mayor que 0.\n");
    return 0;
  }

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= limitNumber; j++) {
      printf("%d * %d = %d", i, j, (i*j));
      if (j < limitNumber) {
        printf(",   ");
      }
    }
    printf("\n");
  }

  return 0;
}