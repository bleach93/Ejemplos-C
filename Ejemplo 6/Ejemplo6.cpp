#include <stdio.h>
#include <clocale>

int main()
{
	setlocale(LC_CTYPE,"Spanish");
    int n, opcion;

    do
    {
    	printf("\n Escoje una opcion: ");
        printf( "\n   1. Menor a 12 ");
        printf( "\n   2. Entre 13 y 17. ");
        printf( "\n   3. Entre 18 y 30 ");
        printf( "\n   4. Entre 31 y 40 " );
        printf( "\n   5. Entre 41 y 65 " );
        printf( "\n   6. Mayor a 66 " );
        printf( "\n\n   Introduzca opcion (1-6): ");

        scanf( "%d", &opcion );

        switch (opcion)
        {
            case 1: printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                    if(n>12){
                    	printf("  \nEres mayor a 12, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n   Tu edad es de: %d",n);
                    printf(" y eres Niño \n");
                    break;

            case 2: printf( "\n   Introduce tu edad: " );
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

            case 3: printf( "\n   Introduce tu edad: " );
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
            case 4: printf( "\n   Introduce tu edad: " );
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
            case 5: printf( "\n   Introduce tu edad: " );
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
            case 6: printf( "\n   Introduce tu edad: " );
                    scanf( "%d", &n );
                     if(n<66){
                    	printf("  \nEres menor, escoje otra edad. \n");
                    	break;
					}
                    printf( "\n  Tu edad es de: %d",n );
                    printf(" y eres Tercerda edad \n");
         }

    } while ( opcion != 6 );

    return 0;
}
