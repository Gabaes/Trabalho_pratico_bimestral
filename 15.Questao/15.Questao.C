#include <stdio.h>

int main() {
    int turmas = 14;
    int i, j, alunos, ausentes, porcentagem, numero_ausentes = 0;
    char identificacao;

    for (i = 0; i < turmas; i++) {
        printf("Digite a identificação da turma (A, B, C...): ");
        scanf(" %c", &identificacao);

        printf("Digite o número de alunos matriculados na turma %c: ", identificacao);
        scanf("%d", &alunos);

        ausentes = 0;
        for (j = 0; j < alunos; j++) {
            int matricula;
            char presenca;

            printf("Digite o número de matrícula do aluno %d e se ele está presente (P) ou ausente (A): ", j+1);
            scanf("%d %c", &matricula, &presenca);

            if (presenca == 'A'|| 'a') {
                ausentes++;
            }
        }

        porcentagem = (ausentes * 100) / alunos;
        printf("Turma %c: %.2f%% de ausência\n", identificacao, (float)porcentagem);

        if (porcentagem > 5) {
            numero_ausentes ++;
        }
    }

    printf("%d turmas tiveram porcentagem de ausência superior a 5%%\n", numero_ausentes);

    return 0;
}