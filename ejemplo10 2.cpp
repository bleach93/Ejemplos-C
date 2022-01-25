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
}
main()
{	float data;
	printf("Captura data: ");
	scanf("%d",data);
	system("cls");
	printf("El numero %0.2f, esta en la posicion %d",data,buscar(data));
	getch();
}
