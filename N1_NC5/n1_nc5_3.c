#include <stdio.h>

int main (){
    int idade;                  
    float altura;     
    char opcao;              
    char nome[20];  
    //sintaxe scanf
    //scanf("formato1" "formato2", &variaval, variavel2, ...);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A Altura é: %f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);


}