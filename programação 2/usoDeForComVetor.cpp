#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int i, maior=0, menor=0;
    float valor[10];

    printf("Digite 10 valores: ");
    
    for (i=0;i<10;i++){
      printf("\nValor %d: ", i+1); scanf("%f", &valor[i]);
