#include <stdio.h>
/*
	Programa para capturar 3 edades y obtener su promedio
*/
main()
{	int ed1,ed2,ed3;
	float promedio=0;
	
	printf("Captura la primera edad: ");
	scanf("%d", &ed1);
	printf("Captura la segunda edad: ");
	scanf("%d", &ed2);
	printf("Captura la tercera edad: ");
	scanf("%d", &ed3);
	
	promedio = (float)(ed1 + ed2 +ed3) / 3; // Obligo a la operación aritmetica a convertir el tipo de dato int a float.
	 
	printf("El promedio es de: %0.2f", promedio);
	
	return 0;
}
