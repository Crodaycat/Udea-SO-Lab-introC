#include <stdio.h>
#include <stdlib.h>

int isMutiple (int x, int y);

int main (int argc, const char* argv[]) {

  printf("Ingrese un par de números positivos separados por espacio: ");

  char stringOne[12];
  char stringTwo[12];
  
  
  scanf("%s %s", stringOne, stringTwo);

  int numberOne = atoi(stringOne);
  int numberTwo = atoi(stringTwo);

  if (numberOne < 1) {
    printf("El primer número debe ser un positivo mayor que 0.\n");
    return 0;
  } 
  
  if (numberTwo < 1) {
    printf("El segundo número debe ser un positivo mayor que 0.\n");
    return 0;
  }
  
  if (isMutiple(numberOne, numberTwo)) {
    printf("%d es múltiplo de %d.\n", numberTwo, numberOne);
  } else {
    printf("%d no es múltiplo de %d.\n", numberTwo, numberOne);
  }

  return 0;
}

int isMutiple (int x, int y) {
  int modulus = y % x;

  return (modulus > 0) ? 0 : 1;
}