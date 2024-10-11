#include <stdio.h>
#include <math.h>

int main(){
    float imc, peso, altura;

    printf("=== Calculadora IMC ===\n\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    if(imc <=16.9){
        printf("Muito abaixo do peso, IMC: %.2f.", imc);
    }
    else if(imc >=17 && imc<=18.4){
        printf("Abaixo do peso, IMC: %.2f.", imc);
    }
    else if(imc >=18.5 && imc<=24.9){
        printf("Peso normal, IMC: %.2f.", imc);
    }
    else if(imc >=25 && imc<=29.9){
        printf("Acima do peso, IMC: %.2f.", imc);
    }
    else if(imc >=30 && imc<=34.9){
        printf("Obesidade grau I, IMC: %.2f.", imc);
    }
    else if(imc >=35 && imc<=40){
        printf("Obesidade grau II, IMC: %.2f.", imc);
    }
    else{
        printf("Obesidade grau III, IMC: %.2f.", imc);
    }


    return 0;
}
