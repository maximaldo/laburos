#include <stdio.h>

void saludar(char *saludo) {
    printf("Hola, %s.\n", saludo);
}

int main(int argc, char *argv[]) {
    char *saludo = argv[1];
    saludar(saludo);
    return 0;
}
