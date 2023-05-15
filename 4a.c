#include <stdio.h>
#include <stdbool.h>

int saludar(int a, int b) {
  int perro = a == b ? true : false;
  printf("nashe %d",perro);
}

int main(void) {

    
    saludar(2,2);
    return 0;
}