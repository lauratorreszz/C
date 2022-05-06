#include <stdio.h>

int main()
{  
    int num1, num2, soma, i;
    
    printf("Digite o primeiro número: "); scanf("%d",&num1);
    printf("Digite o segundo número: "); scanf("%d",&num2);
    
    soma = num1+num2; 
    
    while(soma<50 || soma>250){
       printf("Você deve digitar dois números cuja soma é maior ou igual a 50 e menor que 250");
       printf("\nDigite o primeiro número: "); scanf("%d",&num1);
       printf("\nDigite o segundo número: "); scanf("%d",&num2); 
    }
    
    if(soma>=50 && soma<250){
        for(i=soma; i<=300; i++){
            printf("%d\n", i);
        }
    }
    
    
    
 
   
    return 0;
}
