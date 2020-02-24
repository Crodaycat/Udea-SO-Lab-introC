#include <stdio.h>
#include <stdlib.h>

// Para compilar gcc -Wall p7.c -o p7.out
// Para ejecutar ./p7.out

long mathFactorial(int n);

int main (int argc, const char* argv[]) {

  printf("Ingrese un número entero positivo: ");
  
  char stringOne[12];
  
  scanf("%s", stringOne);

  int numberOne = atoi(stringOne);

  if (numberOne < 0) {
    printf("Debe ingresar un número positivo.\n");
    return 0;
  }

  int r = 0;

  while (numberOne != 0) {
    r = r * 10;
    r = r + numberOne%10;
    numberOne = numberOne/10;
  }

  printf("Numero invertido: %d\n", r);

  return 0;
}