#include <stdio.h>

int main (){
    int idade = 39;                  
    float altura = 1.70;     
    char opcao = 'S';              
    char nome[20] = "elton";       
    
    //printf("A idade do %s é: %d\n", nome, idade);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("A opcão é: %c\n", opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro em formato decimal.
    %i: Equivalente ao %d.
    %f: Imprime um número inteiro de ponto flutuante no formato padrão.
    %e: Imprime um número inteiro de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeira (string) de caracteres. 
    */


}    