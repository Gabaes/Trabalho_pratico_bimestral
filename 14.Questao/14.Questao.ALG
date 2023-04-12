Algoritmo "semnome"
Var
    sexo, cor_olhos, cor_cabelos: caractere
    idade, maior_idade, cont_fem_verde_louro, cont_fem: inteiro
    percent_fem_verde_louro: real

Inicio
    maior_idade <- 0
    cont_fem_verde_louro <- 0
    cont_fem <- 0

    Escreva("Digite as informações dos habitantes:")

    repita
        Escreva("Sexo (M/F):")
        leia(sexo)
        Escreva("Cor dos olhos (A - Azuis / V - Verdes / C - Castanhos):")
        leia(cor_olhos)
        Escreva("Cor dos cabelos (L - Louros / C - Castanhos / P - Pretos):")
        leia(cor_cabelos)
        Escreva("Idade:")
        leia(idade)

        se (idade > maior_idade) entao
            maior_idade <- idade

        se (sexo = "F") entao
            cont_fem <- cont_fem + 1
            se (cor_olhos = "V" e cor_cabelos = "L" e idade >= 18 and idade <= 35) entao
                cont_fem_verde_louro <- cont_fem_verde_louro + 1

        Escreva("-----------------------------------------")

    ate (idade = -1)

    se (cont_fem > 0) entao
        percent_fem_verde_louro <- (cont_fem_verde_louro * 100) / cont_fem
    senao
        percent_fem_verde_louro <- 0
        
    fimse
    fimse
    fimse
    fimse

    Escreva("Maior idade: ", maior_idade)
    Escreva("Percentual de mulheres com olhos verdes, cabelos louros e idade entre 18 e 35 anos: ", percent_fem_verde_louro, "%")

FimAlgoritmo
