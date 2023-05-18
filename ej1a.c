#include <stdio.h>
#include <stdlib.h>

int jano(int a)
{
 if( a >= 0) return a;
 return -a;


}



int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    printf("%d\n", jano(a));
    printf("Hola");
    return 0;
}