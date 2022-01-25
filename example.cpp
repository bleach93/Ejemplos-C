#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int cde(void)
{	char c, numero[10];
	int x=0;
	do
	{ c=getch();
		if(c>=48 && c<=57)
		{	printf("%c",c);
			numero[x]=c;
			x++;
		}
		else if(c==8 && x>0)
		{ 	x--;
			printf("\b \b");
			numero[x]=' ';
		}
	} while(c!=13 && x<10);
	return atoi(numero);
}

main()
{	system("cls");
	int num;
	printf("\nIntroduce un Numero:");
	num=cde();
	printf("\nEl Numero es: %i",num);
}
