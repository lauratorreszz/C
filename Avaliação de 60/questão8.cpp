#include <stdio.h>

int main()
{
    int i, x; 
    int numeros[10];
    printf("Digite 10 números: ");
    
    for(i=0; i<10; i++){
        printf("\nNúmero %d: ",i+1);
        scanf("%d",&numeros[i]);
    }
    
    printf("Os números pares são: ");
    if(numeros[0]%2==0){
        printf("%d\n",numeros[0]);
    }
    if(numeros[1]%2==0){
        printf("%d\n",numeros[1]);
    }
    if(numeros[2]%2==0){
        printf("%d\n",numeros[2]);
    }
    if(numeros[3]%2==0){
        printf("%d\n",numeros[3]);
    }
    if(numeros[4]%2==0){
        printf("%d\n",numeros[4]);
    }
    if(numeros[5]%2==0){
        printf("%d\n",numeros[5]);
    }
    if(numeros[6]%2==0){
        printf("%d\n",numeros[6]);
    }
    if(numeros[7]%2==0){
        printf("%d\n",numeros[7]);
    }
    if(numeros[8]%2==0){
        printf("%d\n",numeros[8]);
    }
    if(numeros[9]%2==0){
        printf("%d\n",numeros[9]);
    }
    
    printf("Os números ímpares são: ");
    if(numeros[0]%2!=0){
        printf("%d\n",numeros[0]);
    }
    if(numeros[1]%2!=0){
        printf("%d\n",numeros[1]);
    }
    if(numeros[2]%2!=0){
        printf("%d\n",numeros[2]);
    }
    if(numeros[3]%2!=0){
        printf("%d\n",numeros[3]);
    }
    if(numeros[4]%2!=0){
        printf("%d\n",numeros[4]);
    }
    if(numeros[5]%2!=0){
        printf("%d\n",numeros[5]);
    }
    if(numeros[6]%2!=0){
        printf("%d\n",numeros[6]);
    }
    if(numeros[7]%2!=0){
        printf("%d\n",numeros[7]);
    }
    if(numeros[8]%2!=0){
        printf("%d\n",numeros[8]);
    }
    if(numeros[9]%2!=0){
        printf("%d\n",numeros[9]);
    }
    return 0;
}
