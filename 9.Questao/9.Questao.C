#include <stdio.h>

int main() {
    float peso, idade, dose;
    int gotas;
    
    printf("Insira a idade do paciente: ");
    scanf("%f", &idade);
    printf("Insira o peso do paciente: ");
    scanf("%f", &peso);
    
    if (idade >= 12) {
        if (peso >= 60) {
            dose = 1000;
        } else {
            dose = 875;
        }
    } else {
        if (peso >= 5 && peso <= 9) {
            dose = 125;
        } else if (peso >= 9.1 && peso <= 16) {
            dose = 250;
        } else if (peso >= 16.1 && peso <= 24) {
            dose = 375;
        } else if (peso >= 24.1 && peso <= 30) {
            dose = 500;
        } else if (peso > 30) {
            dose = 750;
        }
    }
    
    gotas = (dose * 20) / 500;
    printf("O paciente deve tomar %d gotas por dose.", gotas);
    
    return 0;
}
