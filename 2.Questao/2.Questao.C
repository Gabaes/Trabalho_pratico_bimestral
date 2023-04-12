#include <stdio.h>
#include <locale.h>

int main(){

    float n1, n2, media;
    setlocale(LC_ALL, "portuguese");

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    printf("Digite a segunda nota:");
    scanf("%f", &n2);
    
    media = (n1 + n2)/2;
    printf("A media final é: %f", media);

    return 0;
}