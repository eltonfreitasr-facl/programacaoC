int main(){
    int idade = 20;
    float altura = 1.75;

    //idade >= 18 => Verdadeira
    //idade <= 30 => Verdadeira
    //Verdadeira && Verdadeira
    //Verdadeir0 && altura > 1.70
    //Verdadeir0 && Verdadeiro => Verdadeiro

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
        printf("Você não atende aos critérios\n");
    }
    }
