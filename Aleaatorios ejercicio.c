#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	short int ni;
	short int mv;
	short int r;

	
	srand(time (NULL));
	
	printf("Digite un numero de intentos: ");
	scanf("%hi",&ni);
	
	printf("Digite el valor maximo: ");
	scanf("%hi",&mv);
	
	
	int i;
	int j;
	for(i=1;i<=1;i++){
	
	r = rand()% (mv-1+1)+1;
	printf("\n");
	}
	
	for(j=1;j<=ni;j++){
	
	short int num;
	printf("Digite un numero: ");
	scanf("%hi",&num);
	
	if(num==r){
	
	printf("El numero es correcto, acertastes!! \n");
	
	}
	else {
		j = j+1;
		if(num>r){
		
		printf("Te pasaste un poco !! \n");
		
		}
		else {
		
		printf("Demasiado pequeño !! \n");
		}
	}

	}
		
	printf("El numero era %d",r);
	
	
	
	
	
	return 0;
}
