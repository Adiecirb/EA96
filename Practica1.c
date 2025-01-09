//
// Created by usuario on 08/01/2025.
//
#include <stdio.h>


int validatePositiveInt(int x){

  if (x < 0) {
    printf("Neg\n");
  }else
    printf("valido\n");
    return 0;

}
void generateTable(int number) {
  int contador;
  int e, f, i, j;
e=1, f =10;
  for (i = e; i < f; i++) {
    contador = i;

    for (j = 1; j <= 10; j++) {

      printf("|%3d|", contador*j);

    }


    printf("\n");
  }

}

void printTable(int number);

int main(void){

int a;
printf("Ingrese un numero positivo:\n");
scanf("%d", &a);
validatePositiveInt(a);
  printf("\nTabla\n");
 generateTable(a);

  return 0;

}