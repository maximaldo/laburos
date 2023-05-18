#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void jano(double a, double b, double c)
{
    double d = (b*b) - (4*a*c);
    double jano = (-b + sqrt(d)) / (2*a);
     double thiago = (-b - sqrt(d)) / (2*a);
 if( d > 0) printf ("%.2f, %.2f\n",jano , thiago );
 if( d == 0) printf ("tiene raiz doble que es %.2f\n",jano);
 if( d < 0) printf("no tiene solucion\n");


}



int main(int argc, char *argv[]){
    double a = atoi(argv[1]);
     double b = atoi(argv[2]);
      double c = atoi(argv[3]);
   jano(a,b,c);
    printf("Hola");
    return 0;
}