#include <stdio.h>

int main()
{  
    int num1, num2, soma, i;
    
    printf("Digite o primeiro n�mero: "); scanf("%d",&num1);
    printf("Digite o segundo n�mero: "); scanf("%d",&num2);
    
    soma = num1+num2; 
    
    while(soma<50 || soma>250){
       printf("Voc� deve digitar dois n�meros cuja soma � maior ou igual a 50 e menor que 250");
       printf("\nDigite o primeiro n�mero: "); scanf("%d",&num1);
       printf("\nDigite o segundo n�mero: "); scanf("%d",&num2); 
    }
    
    if(soma>=50 && soma<250){
        for(i=soma; i<=300; i++){
            printf("%d\n", i);
        }
    }
    
    
    
 
   
    return 0;
}
