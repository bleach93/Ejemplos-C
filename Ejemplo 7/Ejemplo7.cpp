#include <stdio.h>
#include <clocale>
#include <ctype.h>

int main()
{
	setlocale(LC_CTYPE,"Spanish");
    int n; 
	char opcion;

    do
    {
    	printf("\n Escoje una opcion: ");
        printf( "\n   a. Menor a 12 ");
        printf( "\n   b. Entre 13 y 17. ");
        printf( "\n   c. Entre 18 y 30 ");
        printf( "\n   d. Entre 31 y 40 " );
        printf( "\n   e. Entre 41 y 65 " );
        printf( "\n   f. Mayor a 66 " );
        printf( "\n\n   Introduzca opción (a-b): ");

        scanf( "%s", &opcion );

        switch (tolower(opcion))
        {
            case 'a': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n>12){
                    	printf("  \nEres mayor a 12, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n   Tu edad es de: %d",n);
                    printf(" y eres Niño \n");
                    break;

            case 'b': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n<13){
                    	printf("  \nEres menor a 13, escoje otra edad. \n");
                    	break;
					} if (n>17){
						printf("  \nEres mayor a 17, escoje otra edad. \n");
                    	break;
					}
					
                    printf( "\n   Tu edad es de: ",n );
                    printf(" y eres Adolescente \n");
                    break;

            case 'c': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n<18){
                    	printf("  \nEres menor a 18, escoje otra edad. \n");
                    	break;
					} if(n>30) {
						printf("  \nEres mayor a 30, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n   Tu edad es de: %d",n );
                    printf(" y eres Adulto \n");
                    break;
            case 'd': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n<31){
                    	printf("  \nEres menor a 31, escoje otra edad. \n");
                    	break;
					}if(n>40) {
						printf("  \nEres mayor a 40, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n   Tu edad es de: %d",n );
                    printf(" y eres Adulto Joven \n");
                    break;
            case 'e': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n<41){
                    	printf(" \nEres menor a 41, escoje otra edad. \n");
					}if(n>65) {
						printf("  \nEres mayor a 65, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n   Tu edad es de: %d",n );
                    printf(" y eres Adulto Mayor \n");
                    break;
            case 'f': printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                     if(n<66){
                    	printf("  \nEres menor, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n  Tu edad es de: %d",n );
                    printf(" y eres Tercerda edad \n");
            default: printf("  \n   Opción incorrecta. ");
         }

    } while ( opcion != 6 );

    return 0;
}
