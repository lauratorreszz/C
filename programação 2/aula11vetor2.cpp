#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x;
    float notas[5] = {7, 8, 9, 3.4, 6.8};
    
    for (x=0; x<=4; x++){
        
        printf("notas[%d] = %.1f \n",x,notas[x]);
    }
	
	
	return 0;
}
