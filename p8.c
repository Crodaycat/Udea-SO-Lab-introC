#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()

int generarAleatorio(int x, int y);

int main (void) {
  srand(time(NULL)); //genera la semilla


  int x, y;

  while (1) {
    x = generarAleatorio(1, 10);
    y = generarAleatorio(1, 10);

    printf("¿Cuanto es %d veces %d? para salir responda -1\n", x, y);

    char stringOne[12];
    
    scanf("%s", stringOne);

    int numberOne = atoi(stringOne);

    while ((x * y) != numberOne && numberOne != -1) {
      printf("No. Por favor intenta nuevamente\n");

      scanf("%s", stringOne);
      numberOne = atoi(stringOne);
    }

    if ((x * y) == numberOne) {
      printf("Muy bien!\n");
    } else if (numberOne == -1)  {
      return 0;
    }
  }
}

int generarAleatorio(int x, int y) {
  return rand()%(y - x + 1) + x;
}