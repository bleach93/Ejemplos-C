#include<stdio.h>
#include<string.h>
main(){
	char nom[20];
	int x,len;
	
	printf("captura: ");
	scanf("%s",&nom);
	len=strlen(nom);
	for(x=0;x<len;x++)
		printf("%c",nom[x]);
	printf("nom = %d \n",strlen(nom));
	printf("tu captura es: %s",nom);
	
	return 0;
}
