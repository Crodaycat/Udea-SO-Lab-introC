#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char* argv[]) {

  char stringInput[4];
  
  printf("Ingrese el número de renglones (máximo 4 cifras y positivo): ");
  fgets (stringInput, 4, stdin);

  int limitNumber = atoi(stringInput);

  if (limitNumber < 1) {
    printf("Debe ingresar un número positivo mayor que 0.\n");
    return 0;
  }

  for (int i = 1; i <= limitNumber; i++) {
    int toggle = i % 2;
    for (int j = 0; j < i; j++) {
      printf("%d", ((j + toggle) % 2));
    }
    printf("\n");
  }

  return 0;
}