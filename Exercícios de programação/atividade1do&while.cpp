#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 1;
    
    do{ //faça
        printf("Entre com um numero entre 1 e 10 "); scanf("%d",&num);
    }
    while(num<1 || num>10);
    return 0;
}
// && é and 
// || é or 
// ! é not 
// != not_eq
