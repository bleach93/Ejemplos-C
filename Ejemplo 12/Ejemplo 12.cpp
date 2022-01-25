/*
	Capturar un nombre y compararlos, si 0 es mayor, s1 es mayor, si 0 es menor, s2 es mayor, si es == 0 son iguales.
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
   char s1[10];
   char s2[10];
   int i;
 
	printf( "Introduce el primer nombre: " , s1 );
   	scanf("%s",&s1);
   	
	printf( "Introduce la segunda palabra: ", s2 );
 	scanf("%s",&s2);
 	
	i = strcmp( s1, s2 );
	if( i == 0 )  printf( "Son iguales" );
	else if( i > 0 ){ printf( "%s",s1 );
	printf(" Es mayor que ");
	printf( "%s",s2);}
	else{ printf( "%s",s2 );
	printf(" Es mayor que ");
	printf( "%s",s1);}
	return 0;       
}

