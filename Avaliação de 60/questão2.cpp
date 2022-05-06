#include <stdio.h>
#include <stdlib.h> 

int main()
{
    float morangos, macas, total, total2, valorMorangos, valorMacas, valorMorangos2, valorMacas2, desconto, desconto2;
    
    printf("Insira a quantidade de morangos em kg: "); scanf("%f",&morangos);
    printf("Insira a quantidade de maçãs em kg: "); scanf("%f",&macas);
    
    valorMorangos = morangos*2.5;
    valorMacas = macas*1.8;
    valorMorangos2 = morangos*2.2;
    valorMacas2 = macas*1.5;
    total = valorMorangos+valorMacas;
    total2 = valorMorangos2+valorMacas2;
    desconto = (total*15)/100;
    desconto2 = (total2*15)/100;
    
    
    if(morangos<=5){
        printf("Valor dos morangos: %.1f\n",valorMorangos);
    }
    else if(morangos>5){
        printf("Valor dos morangos: %.1f\n",valorMorangos2);
    }
    
    if(macas<=5){
        printf("Valor das maçãs: %.1f\n",valorMacas);
    }
    else if(macas>5){
        printf("Valor das maçãs: %.1f\n",valorMacas2);
    }
    
    
    if(morangos+macas>8){
        printf("Você recebeu %%15 de desconto e assim o total da compra é: %.1f", total-desconto);
    }
    
    else if(total>20){
        printf("Você recebeu %%15 de desconto e assim o total da compra é: %.1f", total-desconto);
    }
    
    else if(total2>20){
        printf("Você recebeu %%15 de desconto e assim o total da compra é: %.1f", total2-desconto2);
    }
    return 0;
}

