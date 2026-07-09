#include <stdio.h>

int main(){

    double altura, peso, imc;
    
    do {

        printf("Digite sua altura: \n");
        scanf("%lf", &altura);

        if (altura <= 0) {
        printf("Altura invalida! Digite um valor maior que 0.\n");
        }   

    } while (altura <= 0);

    do {

        printf("Digite seu peso: \n");
        scanf("%lf", &peso);

        if (peso <= 0) {
        printf("Peso invalido! Digite um valor maior que 0.\n");
        }

    } while (peso <= 0);

    imc = peso / (altura * altura);

    if (imc < 18.5 ) {

        printf("Seu IMC eh: %.2lf\n", imc);
        printf("Voce esta abaixo do peso!");

    } else if (imc >= 18.5 && imc < 25.0) {

        printf("Seu IMC eh: %.2lf\n", imc);
        printf("Voce esta com o peso adequado!");

    } else if (imc >= 25.0 && imc < 29.9) {

        printf("Seu IMC eh: %.2lf\n", imc);
        printf("Voce esta acima do peso!");

    } else {

        printf("Seu IMC eh: %.2lf\n", imc);
        printf("Voce esta com obesidade!");

    }

    return 0;
}