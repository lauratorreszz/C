#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float nota1, nota2, nota3, nota4, media;
    
    printf("Informe a primeira nota: "); scanf("%f",&nota1);
    printf("Informe a segunda nota: "); scanf("%f",&nota2);
    printf("Informe a terceira nota: "); scanf("%f",&nota3);
    printf("Informe a quarta nota: "); scanf("%f",&nota4);
    
    media = nota1+nota2+nota3+nota4/4;
    
    if(media>6.9){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
    
    return 0;
}
