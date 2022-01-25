#include <stdio.h>

main(){
	
	int edad;
	char nombre[10];
	
	//INTRODUCE Y CAPTURA EL NOMRBE
	printf("Introduce tu edad: ");
	scanf("%s",&nombre);
	
	//INTRODUCE Y CAPTURA LA EDAD
	printf("Introduce tu edad: ");
	scanf("%d",&edad);
	
	//IMPRIME RESULTADOS
	printf("Tu nombre es %s y tu edad es de %d",nombre,edad);	
}
