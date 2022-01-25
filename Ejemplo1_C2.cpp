#include <stdio.h>

main(){
	int n[5], y=0;
	float prom;
		for(int x=0;x<5;x++) {
			printf("Numero %d: ",x+1);
			scanf("%d",&n[x]);
			y+=n[x];
		}
		prom=y/5;
		printf("El promedio: %f",prom);
			
		for(int x=0;x<5;x++)
		printf("\nNumero %d: %d",x+1,n[x]);
}
