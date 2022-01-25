/*
	Capturar 5 edades y el promedio.
*/
#include<stdio.h>
#include <clocale>
#include <ctype.h>

main(){
	setlocale(LC_CTYPE,"Spanish");
	int edad; 
	int suma;
	int promedio;
 		for(int i=1;i<=5;i++) //Declarar el contador
		 {
    		printf("Capture la edad %d: ",i);      
    		scanf("%d",&edad);                
			suma=suma+edad;
			promedio=promedio+edad/5;
   		}
   printf("\nEl promedio de las edades es %d",promedio);                                                    
   return 0;                                       
}
