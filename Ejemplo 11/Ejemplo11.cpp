/*
	Capturar matricula, nombre apellido materno y paterno,edad, peso y estatura, si al final se pregunta si quiere capturar otro.
*/
#include <stdio.h>
#include <stdlib.h>

main(){

	int edad,peso,estatura;
	char nombre[30];
	char matape[30];
	char patape[30];
	char matricula[10];
	char res;
		 	do {
		 		system("cls");
    			printf("Captura tu matricula: ");
    			scanf("%s",&matricula);
    			printf("Captura tu nombre: ");
    			scanf("%s",&nombre);
    			printf("Captura tu apellido materno: ");
    			scanf("%s",&matape);
    			printf("Captura tu apellido paterno: ");
    			scanf("%s",&patape);
    			printf("Captura tu edad: ");
    			scanf("%d",&edad);
    			printf("Captura tu peso (en Gramos): ");
    			scanf("%d",&peso);
    			printf("Captura tu estatura: (En centimetros)");
    			scanf("%d",&estatura);
    			printf("Desea seguir capturando?: S/N");
    			scanf(" %c",&res);
				} while(res=='S');
	return 0;                                                          
}
