#include <stdio.h>
#include <stdlib.h>

int jano(int a, int b, int c)
{
 if( a > b && a > c) return a;
 if( b > c && b > a) return b;
 if( c > a && c > b) return c;


}



int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
     int b = atoi(argv[2]);
      int c = atoi(argv[3]);
    printf("%d\n", jano(a,b,c));
    printf("Hola");
    return 0;
}