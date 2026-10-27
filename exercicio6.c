#include <stdio.h>

int main() {
    int quantidade, i;
    char sexo;
    float altura;
    float somaMulheres = 0, somaHomens = 0;
    int contMulheres = 0, contHomens = 0;
    float mediaMulheres, mediaHomens;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("\nPessoa %d\n", i);

        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (sexo == 'F' || sexo == 'f') {
            somaMulheres += altura;
            contMulheres++;
        } else if (sexo == 'M' || sexo == 'm') {
            somaHomens += altura;
            contHomens++;
        } else {
            printf("Sexo invalido! Essa pessoa nao sera contabilizada.\n");
        }
    }

    if (contMulheres > 0) {
        mediaMulheres = somaMulheres / contMulheres;
        printf("\nAltura media das mulheres: %.2f\n", mediaMulheres);
    } else {
        printf("\nNenhuma mulher foi informada.\n");
    }

    if (contHomens > 0) {
        mediaHomens = somaHomens / contHomens;
        printf("Altura media dos homens: %.2f\n", mediaHomens);
    } else {
        printf("Nenhum homem foi informado.\n");
    }

    return 0;
}
