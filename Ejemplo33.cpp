#include<stdio.h>

main(){	int num[10],num2[10],cont=0;
	for(int x=0;x<10;x++)
	{	printf("Dame el numero %d: ",x+1);
		scanf("%d",&num[x]);
	}
	for(int x=0,y=9;x<10;x++,y--)
	{	printf("Array 1:");
		printf("%d\n",num[x]);
		num2[y]=num[x];
	}
	for(int y=0;y<10;y++)
	{	printf("Array 2:");
		printf("%d\n",num2[y]);
	}
}
