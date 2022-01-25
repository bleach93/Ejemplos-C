#include <stdio.h>

/*
	Programa para comparar 2 edades y mostrar quien es mayor, y si se da el caso que ambas edades son iguales, se muestra un mensaje.
*/
main(){
	
	int edad1,edad2;
	char nombre1[30],nombre2[30];
	
	printf("Introduzca el primer nombre: ");
	scanf("%s",&nombre1);
	
	printf("Introduzca el segundo nombre: ");
	scanf("%s",&nombre2);
	
	printf("Introduzca la primera edad: ");
	scanf("%d",&edad1);
	
	printf("Introduzca la segunda edad: ");
	scanf("%d",&edad2);
	
	if(edad1>edad2)
		printf("%s Es mayor",nombre1);
	
	else if(edad1<edad2)
		printf("%s Es mayor",nombre2);
	
	if(edad1 == edad2)
		printf("%s y %s Tienen la misma edad",nombre1,nombre2);
}

