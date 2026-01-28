#include <stdio.h>

int main () {
    int numero = 10;
    int resultado;
    resultado = numero % 2;

    if (resultado % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é impar\n");
    }



}