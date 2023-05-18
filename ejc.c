#include <stdio.h>
#include <stdlib.h>

void jano(int a)
{
 if( a > 0){
     printf("es positivo\n") ;
     }
 if( a == 0) printf("es 0\n");
 if( a < 0) printf("es negativo\n");


}



int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    // int b = atoi(argv[2]);
     // int c = atoi(argv[3]);
    jano(a);
    printf("Hola");
    return 0;
}