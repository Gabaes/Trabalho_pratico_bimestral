#include <stdio.h>

int main() {
    char sexo, cor_olhos, cor_cabelos;
    int idade, maior_idade = -1;
    int num_fe_verde_louro = 0, num_fem_total = 0;

    do {
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo == 'M') continue;

        printf("Cor dos olhos (A/V/C): ");
        scanf(" %c", &cor_olhos);
        if (cor_olhos != 'V') continue; 

        printf("Cor dos cabelos (L/C/P): ");
        scanf(" %c", &cor_cabelos);
        if (cor_cabelos != 'L') continue; 

        printf("Idade (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if (idade >= 18 && idade <= 35) {
            num_fem_total++;
            if (sexo == 'F') {
                num_fe_verde_louro++;
            }
        }
    } while (idade != -1);

    printf("Maior idade: %d\n", maior_idade);

    if (num_fem_total > 0) {
        float percentual_fem_verde_louro = (float) num_fe_verde_louro / num_fem_total * 100;
        printf("Percentual de mulheres com olhos verdes e cabelos louros entre 18 e 35 anos: %.2f%%\n", percentual_fem_verde_louro);
    } else {
        printf("Nao ha mulheres entre 18 e 35 anos com olhos verdes e cabelos louros.\n");
    }

    return 0;
}

