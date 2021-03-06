#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()

void printFinalMessage(int correct, int wrong);
void printError(int x);
void printSucces(int x);
int generarAleatorio(int x, int y);

int main (void) {
  srand(time(NULL)); //genera la semilla


  int x, y, response, correct = 0, wrong = 0;

  while (1) {
    x = generarAleatorio(1, 10);
    y = generarAleatorio(1, 10);
    response = generarAleatorio(0, 3);

    printf("¿Cuanto es %d veces %d? para salir responda -1\n", x, y);

    char stringOne[12];
    
    scanf("%s", stringOne);

    int numberOne = atoi(stringOne);

    while ((x * y) != numberOne && numberOne != -1) {
      wrong++;
      printError(response);
      printf("¿Cuanto es %d veces %d? para salir responda -1\n", x, y);

      response = generarAleatorio(0, 3);

      scanf("%s", stringOne);
      numberOne = atoi(stringOne);
    }

    if ((x * y) == numberOne) {
      correct ++;
      printSucces(response);
    } else if (numberOne == -1)  {
      printFinalMessage(correct, wrong);
      return 0;
    }
  }
}

void printFinalMessage(int correct, int wrong) {
  if (correct == 0 && wrong != 0) {
    printf("Por favor pídele ayuda al instructor.\n");
    return;
  }

  int succesPercent = (correct * 100) / (correct + wrong);

  if(succesPercent < 75) {
    printf("Por favor pídele ayuda al instructor.\n");
  }

  
}

void printError(int x) {
  switch (x) {
    case 0:
      printf("No. Por favor trata de nuevo.\n");
      break;
    case 1:
      printf("Incorrecto. Trata una vez más.\n");
      break;
    case 2:
      printf("No te rindas!\n");
      break;
    default:
      printf("No. Trata de nuevo\n");
      break;
  }
}

void printSucces(int x) {
  switch (x) {
    case 0:
      printf("Muy bien!\n");
      break;
    case 1:
      printf("Excelente!\n");
      break;
    case 2:
      printf("Buen trabajo!\n");
      break;
    default:
      printf("Sigue haciéndolo bien!\n");
      break;
  }
}

int generarAleatorio(int x, int y) {
  return rand()%(y - x + 1) + x;
}