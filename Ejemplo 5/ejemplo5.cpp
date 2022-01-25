#include <stdio.h>
#include <conio.h>

/*
	Programa para comparar 3 edades y mostrar cual es la mayor, y en dado caso que sean iguales, se muestre un mensaje.
*/
main(){
	
	int edad1,edad2,edad3;
		
		printf("Introduzca la primera edad: "); // Se captura la primera edad
		scanf("%d",&edad1);
	
		printf("Introduzca la segunda edad: "); // Se captura la segunda edad.
		scanf("%d",&edad2);
	
		printf("Introduzca la tercera edad: "); // Se captura la tercera edad.
		scanf("%d",&edad3);
	
		if(edad1 == edad2 && edad1==edad3) // Se comparan las edades para ver si son iguales.
			printf("Las edades son iguales");	
	
		else if (edad1 > edad2 && edad1 > edad3 ) // Se compara si la primera edad es mayor que la segunda y la tercera edad.
			printf("%d Es mayor",edad1);
	
		if(edad2 > edad1 && edad2 >edad3) // Se compara si la segunda edad, y se compara con la primera y la tercera.
			printf("%d Es mayor",edad2);
	
		else if(edad3 > edad1 && edad3 > edad2) // Se compara si la edad tres es mayor que la primera edad y la segunda edad.
			printf("%d Es mayor",edad3);
		
		if(edad1 == edad2 && edad1>edad3) /* Se compara si la primera edad es igual a la segunda edad 
		y si es mayor a la tercera edad, por lo tanto el resultado es la primera y la segunda edad en un solo número.*/
			printf("%d Es mayor",edad1);
	
		else if(edad2 == edad1 && edad2>edad3) /* Se compara si la segunda edad es igual a la primera edad 
		y si es mayor a la tercera edad, por lo tanto el resultado es la primera y la segunda edad en un solo número.*/
			printf("%d Es mayor",edad2);
	
		if(edad3 == edad1 && edad3>edad2) // Se compara si la tercera edad es igual a la primera y se compara si es mayor a edad dos.
			printf("%d Es mayor",edad3);
		
		if(edad3 == edad2 && edad3>edad1) // Se compara si la tercera edad es igual a la segunda edad y si es mayor a la primera edad.
			printf("%d Es mayor",edad3);
	
	return 0;
	
}

