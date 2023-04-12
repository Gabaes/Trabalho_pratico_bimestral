#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

char nome[100];
int idade;
printf("Digite o nome do usuário:");
scanf("%s", &nome);
printf("Digite a sua idade:");
scanf("%d", &idade);

printf("%s tem %d anos", nome, idade);

return 0;

}