#include <stdio.h>
/*
	 Programa para identificar cual edad es mayor, si ambas edades son iguales, se muestra un mensaje comentando que ambas edades son iguales.
*/

main()
{
	int edad1, edad2;
	
	printf("Captura una edad: ");
	scanf("%d", &edad1);
	printf("Captura una edad: ");
	scanf("%d", &edad2);
	
	if(edad1==edad2)  //Se abre una condición para comparar las edades y obtener la edad mayor.
		printf("Ambas edades son iguales. ");
	else if (edad1 > edad2)  //Se anida un if y un else, solo se puede anidar siempre y cuando este en la linea siguiente del else.
		printf("La edad mayor es: %d",edad1);					
	else 
		printf("La edad mayor es: %d",edad2);	
			
	return 0;
}
