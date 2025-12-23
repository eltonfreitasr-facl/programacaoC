#include <stdio.h>

int main(){
/* Operadores de Incremento e de Decremento
Incremento (++)
Pré-Incremento ++a
Pós-Íncremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1);
//numero1 = numero1 + 1;
//numero1 +=1;
//Pos Incremento
//resultado = numero1
//numero++
resultado = numero1++;
//printf("Após incremento: %d\n", numero1);
printf("Após Pós-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Após Pré-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

//numero1 = numero1 - 1;
//numero1-= 1;
//numero1--;
//printf("Após Decremento: %d\n", numero1);
resultado = numero1--;
printf("Após Pos-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
resultado = --numero1;
printf("Após Pré-decremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
}