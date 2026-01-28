#include <stdio.h>

int main (){
    int estoque = 6;

    if(estoque < 5) {
        printf("Estoque baixo\n");
    }
    if(estoque == 5){
        printf("Estoque no limite, recompor\n");
    }
    if(estoque > 5) {
        printf("Estoque acima do limite\n");
    }
}
