#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int i, maior=0, menor=0;
    float valor[10];

    printf("Digite 10 valores: ");
    
    for (i=0;i<10;i++){
      printf("\nValor %d: ", i+1); scanf("%f", &valor[i]);
      
    if(i==0){
    maior=valor[i];
    menor=valor[i];
    }
    
      
    if(valor[i]>maior){
        maior=valor[i];
    }
      
    else{
        if(valor[i]<menor){
            menor=valor[i];
        }
      }
    }
    printf("O maior valor é %d\n", maior);
    printf("O menor valor é %d\n", menor);
    return 0;
}
