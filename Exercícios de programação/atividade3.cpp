#include <stdio.h>
#include <stdlib.h>
int main()
{   
    char sexo[1];
    char estadoCivil[1]; 
    char nome[20];
    int idade; 
    float salario;
    
    printf("Digite seu nome: "); scanf("%s",&nome); 
    while(sizeof(nome<3));
    printf("Digite um nome v�lido: "); scanf("%s",&nome);
    

    printf("Digite sua idade: "); scanf("%d",&idade);
    while(idade<=0 || idade>=150);
    printf("Digite uma idade v�lida: "); scanf("%d",&idade);
    
    
    printf("Digite seu sal�rio: "); scanf("%f",&salario);
    while(salario<=0);
    printf("Digite um sal�rio v�lido: "); scanf("%f",&salario);
    
    
    printf("Indique seu sexo utilizando as letras F ou M: "); scanf("%s",&sexo);
    while(sexo!= F || sexo!= M);
    printf("Voc� deve utilizar as letras F ou M: "); scanf("%s",&sexo);
    
    
    printf("Indique seu estado civil utilizando as letras S, C, V ou D: "); scanf("%s",&estadoCivil); 
    while(estadoCivil != S || estadoCivil != C || estadoCivil != V || estadoCivil != D);
    printf("Voc� deve utilizar as letras S, C, V ou D: "); scanf("%s",&estadoCivil);
    
    
    return 0;
}
