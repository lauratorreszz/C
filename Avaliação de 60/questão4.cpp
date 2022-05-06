
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, mediaExercicios, mediaAproveitamento; 
    
    printf("Digite a nota 1: "); scanf("%f",&nota1);
    printf("Digite a nota 2: "); scanf("%f",&nota2);
    printf("Digite a nota 3: "); scanf("%f",&nota3);
    printf("Digite a média dos exercícios: "); scanf("%f",&mediaExercicios);
    
    mediaAproveitamento = (nota1+nota2*2+nota3*3+mediaExercicios)/7;

    if(mediaAproveitamento>=9){
        printf("O conceito do aluno é A");
    }
    
    if(mediaAproveitamento>=7.5 && mediaAproveitamento<9){
        printf("O conceito do aluno é B");
    }
    
    if(mediaAproveitamento>=6 && mediaAproveitamento<7.5){
        printf("O conceito do aluno é C");
    }
    
    if(mediaAproveitamento<6){
        printf("O conceito do aluno é D");
    }
    
    return 0;
}
