#include <stdio.h>

int main(){
    int n;
    float soma = 0, media;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    float numeros[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);

        soma += numeros[i];
    }

    media = soma / n;

    printf("A média aritmética dos números inseridos é: %.2f\n", media);


    return 0;
}