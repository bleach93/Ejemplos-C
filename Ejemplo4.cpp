#include<stdio.h>

main(){	int num[10],num2[10],cont=0;
	for(int x=0;x<10;x++)
	{	printf("Dame el numero %d: ",x+1);
		scanf("%d",&num[x]);
	}
	for(int x=0;x<10;x++)
	{	printf("Array 1:");
		printf("%d\n",num[x]);
		num2[x]=num[9-x];
	}	
	for(int x=0;x<10;x++)
	{	printf("Array 2:");
		printf("%d\n",num2[x]);
	}	
}
