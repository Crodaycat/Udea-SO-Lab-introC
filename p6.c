#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Para compilar gcc -Wall p6.c -o p6.out -lm
// Para ejecutar ./p6.out

long mathFactorial(int n);

int main (int argc, const char* argv[]) {

  printf("Valor de entrada de x: ");
  
  char stringOne[12];
  
  scanf("%s", stringOne);

  int numberOne = atoi(stringOne);

  if (numberOne == 0) {
    printf("x debe ser diferente de 0.\n");
    return 0;
  }

  printf("Número de términos: ");
  
  char stringTwo[12];
  
  scanf("%s", stringTwo);

  int numberTwo = atoi(stringTwo);

  if (numberTwo < 0) {
    printf("n debe ser un número positivo.\n");
    return 0;
  }
  
  double result = 0;
  int sign = 1;
  for (int i = 0; i < numberTwo; i++) {
    int factor = i * 2;
    result += sign * (pow(numberOne, factor)/mathFactorial(factor));
    sign *= -1;
  }

  printf("Suma: %lf\n", result);

  return 0;
}



long mathFactorial(int n) {
  if (n>=1) {
    return n*mathFactorial(n-1);
  } else {
    return 1;
  }
}