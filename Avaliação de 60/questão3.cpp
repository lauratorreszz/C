
#include <stdio.h>
#include <stdlib.h> 

int main()
{   
    int quantidade;
    float precoUni, total, desconto, desconto2, desconto3; 
    
    precoUni = 12.0;
    total = (quantidade*precoUni);
    desconto = (total*2)/100;
    desconto2 = (total*3)/100; 
    desconto3 = (total*5)/100;
    
    printf("Insira a quantidade de garrafas: "); scanf("%d",&quantidade);
    
    if(quantidade<=5){
        printf("Total: %.1f\n",total);
        printf("Desconto: %.1f\n",desconto);
        printf("Total a pagar: %.1f\n",total-desconto);
    }
    
    else if(quantidade>5 && quantidade<=10){    

        printf("Total: %.1f\n",total);
        printf("Desconto: %.1f\n",desconto2);
        printf("Total a pagar: %.1f\n",total-desconto2);
    }
    else if(quantidade>10){
        printf("Total: %.1f\n",total);
        printf("Desconto: %.1f\n",desconto3);
        printf("Total a pagar: %.1f\n",total-desconto3);
    }
    return 0;
}
