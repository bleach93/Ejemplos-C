/* 
	Programa para capturar las calificaciones que el usuario solicite y obtener su promedio
*/
#include<stdio.h>
#include <clocale>
#include <ctype.h>

main(){
	setlocale(LC_CTYPE,"Spanish");
	float calificacion,suma; 
	float promedio;
	int x=0;
		printf("¿Cuantas calificaciones quieres capturar?: ",x);
		scanf("%d",&x);
 		for(int i=1;i<=x;i++) //Declarar el contador
		 {
    		printf("Capture la calificacion %d: ",i);      
    		scanf("%f",&calificacion);                
			suma=suma+calificacion;
			promedio=promedio+calificacion/x;
   		}
   printf("\nEl promedio de las calificaciones es %0.2f",promedio);                                                    
   return 0;                                       
}
