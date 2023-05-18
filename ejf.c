#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double desc(char a, int precio, int cant){
 int total = precio * cant;
 if (a == 'e')
 {
    return total-((total / 100) * 15);
 }
 if (a == 't')
 {
     return total-((total / 100) * 10);
 }
 if (a == 'c' )
 {
     return total-((total / 100) * 5);
 }
 if (a == 'd' )
 {
     return total;
 }
 


}

int main(int argc, char *argv[]){
 char a = argv[1][0];
 int precio = atoi(argv[2]);
  int cant = atoi(argv[3]);
  printf("el precio a pagar es %.2f",desc(a, precio, cant));
  return 0;
 
}