#include<stdio.h>

main(){	int num[10],cont=0;
	for(int x=0;x<10;x++)
	{	printf("Dame el numero %d: ",x+1);
		scanf("%d",&num[x]);
	}
	/*for(int x=0;x=9;x++)
	{	if(num[x<=num[x+1]])
		cont++;
	}*/
	for(int x=0;x<9;x++)
	{	if(num[x]>num[x+1])
		cont++;
		break;
	}
	for(int x=0;x<10;x++)
		printf("%d\n",num[x]);
	if(cont==0){
		printf("Todos los numeros estan ordenados\n");
	}
	else 
	{	printf("Los numeros no estan ordenados\n");
	}
}
