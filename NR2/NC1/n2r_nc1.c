/* 
#include <stdio.h>

int main () {

int a = 10, b = 5;

if (a > 0 && b > 0) //ambos os valores precisam ser positivos
{
    printf("Os dois números são positivos\n");
} else {
    printf("Pelo menos um dos números são nagativos\n");
}

}

*/
#include <stdio.h>

int main () {

int a = -10, b = -5;

if (a > 0 || b > 0) //ambos os valores precisam ser negativos
{
    printf("Pelo menos um dos são positivo\n");
} else {
    printf("Os dois números são nagativos\n");
}

}