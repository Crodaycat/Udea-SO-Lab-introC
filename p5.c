#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Para compilar gcc -Wall p5.c -o p5.out -lm
// Para ejecutar ./p5.out

int main (int argc, const char* argv[]) {

  printf("Ingrese un par de números x y n (x != 0 y n >= 1) separados por espacio: ");

  char stringOne[12];
  char stringTwo[12];
  
  
  scanf("%s %s", stringOne, stringTwo);

  int numberOne = atoi(stringOne);
  int numberTwo = atoi(stringTwo);

  if (numberOne == 0) {
    printf("x debe ser diferente de 0.\n");
    return 0;
  } 
  
  if (numberTwo < 1) {
    printf("n debe ser un positivo mayor que 0.\n");
    return 0;
  }
  
  long result = 0;

  for (int i = 0; i <= numberTwo; i++) {
    result += pow(numberOne, i);
  }

  printf("El resultado de la progresión es: %li\n", result);

  return 0;
}