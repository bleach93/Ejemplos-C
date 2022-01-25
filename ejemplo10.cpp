#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{	float arr[]={1.1,2.5,3.3,10,0.36,6.6,23.36,45.9,87.5,25.6};
	int x=0;
	float data=3.3;
	system("cls");
		for(x=0;x<10;x++)
		{	if(arr[x]==data)
			{	printf("El numero %0.2f, esta en la posicion %d",data,x);
				break;
			}
		}
		getch();
}
