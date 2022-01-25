/* 
	Programa para capturar 5 calificaciones y obtener su promedio
*/
#include<stdio.h>
 
main(){
	float calificacion,suma; 
  	float promedio;
 		for(int i=1;i<=5;i++) //Declarar el contador
		 {
    		printf("Capture la calificacion %d: ",i);      
    		scanf("%f",&calificacion);                
			suma=suma+calificacion;
			                                 
   		}
   promedio=suma/5;  
   printf("\nEl promedio de las calificaciones es %0.2f",promedio);                                                    
   return 0;                                       
}
