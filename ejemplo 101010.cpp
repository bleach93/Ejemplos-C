#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int buscar(float num)
{	float arr[]={1.1,2.5,3.3,10,0.36,6.6,23.36,45.9,87.5,25.6};
	int x;
	for(x=0;x<10;x++)
		{	if(arr[x]==num)
			return x;
		}
	return -1;
}
main()
{	float data;
	int sw;
	printf("Captura data: ");
	scanf("%f",&data);
	sw=buscar(data);
	if(sw>0)
		printf("El numero %0.2f, esta en la posicion %d",data,buscar(data));
	else	
		printf("El numero no existe en el arreglo");
	getch();
}
