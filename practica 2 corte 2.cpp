//estructura para capturar matricula,nombre[15],3 calificaciones flotantes. capturar 2 calificaciones la segunda debe ser mayor que la primera si no 
//que lo vuelva a pedir y mostrar todos los alumnos cuyo promedio este entre ese rango
#include<stdio.h>
#include<stdlib.h>

struct datos{
	char mat[11];
	char nom[15];
	float cal;
	float cal1;
	float cal2;
	float prom;
}alumnos[5];
int main(){
	float rango,rango1;
	for(int x= 0; x<5;x++)
	{
		printf("\nNombre del alumno %d:",x+1);
		scanf("%s",&alumnos[x].nom);
		printf("\nMatricula alumno %d:",x+1);
		scanf("%s",&alumnos[x].mat);
		printf("\nCalificacion:");
		printf("1.-");
		scanf("%f",&alumnos[x].cal);
		printf("\n2.-");
		scanf("%f",&alumnos[x].cal1);
		printf("\n3:");
		scanf("%f",&alumnos[x].cal2);
		alumnos[x].prom = (alumnos[x].cal + alumnos[x].cal1+alumnos[x].cal2)/3;
		system("cls");
	}
	printf("\tNombre\tMatricula\tCorte 1\tCorte 2\tCorte 3\tPromedio");
	for(int x=0; x<5;x++)
	{
	printf("\n\t%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f",alumnos[x].nom,alumnos[x].mat,alumnos[x].cal,alumnos[x].cal1,alumnos[x].cal2,alumnos[x].prom);
	}
	printf("\nIngrese la primera calificacion del rango:");
	scanf("%f",&rango);
	printf("\nIngrese la segunda calificacion del rango:");	
	scanf("%f",&rango1);
	if(rango1<rango)
	{
		printf("\nVuelva a introducir la segunda calificacion rango:");
		scanf("%f",rango1);	
	}
	//for(int x=0;x<5;x++)
	if(alumnos[x].prom>=rango && alumnos[x].prom<=rango1)
	{
		printf("\n\t%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f",alumnos[x].nom,alumnos[x].mat,alumnos[x].cal,alumnos[x].cal1,alumnos[x].cal2,alumnos[x].prom);
	}
	
}
