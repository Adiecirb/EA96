//
// Created by usuario on 09/01/2025.
//
#include <iso646.h>
#include <stdio.h>
#include <string.h>


void reverseString() {
    char cadenaOriginal[50];
    scanf("%s", cadenaOriginal);
    printf("%s\n", cadenaOriginal);
    int len = strlen(cadenaOriginal);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", cadenaOriginal[i]);
    }
}



 int main(){
 char cadenaOriginal[50], cadenaReversa[50] ;

    printf("\n Cadena reversed\n");
    reverseString();



   return 0;

 }
