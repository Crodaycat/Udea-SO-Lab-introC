#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char* argv[]) {

  if (argc < 2) {
    printf("Debe ingresar el total de las ventas del empleado para hacer el cáculo.\n");
    return 0;
  } else if(argc > 2) {
    printf("El programa sólo recibe un argumento.\n");
    return 0;
  }

  int salesAmounth = atoi(argv[1]);
  float multiplier = 0;
  int toAddValue = 0;
  
  if (salesAmounth < 0) {
    printf("Parce ese vendedor le está robando la platica.\n");
    return 0;
  } else if(salesAmounth >= 0 && salesAmounth <= 20000) {
    multiplier = 0.5;
  } else if (salesAmounth >= 20001 && salesAmounth <= 50000) {
    multiplier = 0.7;
  } else {
    multiplier = 0.10;
    toAddValue = 3100;
  }

  float comision = salesAmounth + (salesAmounth * multiplier) + toAddValue;

  printf("La comisión para el vendedor es de: %f\n", comision);

  return 0;

}