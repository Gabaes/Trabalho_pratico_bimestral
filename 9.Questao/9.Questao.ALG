Algoritmo "semnome"

Var

 peso, idade, dose, gotas:real

 
Inicio

escreva("Insira a idade do paciente:")
leia(idade)
escreva("Insira o peso do paciente:")
leia(peso)

se (idade >= 12) entao
se (peso >= 60) entao
dose <- 1000

senao
dose <- 875
fimse

senao
se(peso >= 5) e (peso <= 9) entao
dose <- 125
senao
se(peso >= 9.1) e (peso <= 16) entao
dose <- 250
senao
se(peso >= 16.1) e (peso <= 24) entao
dose <- 375
senao
se(peso >= 24.1) e (peso <= 30) entao
dose <- 500
senao
se(peso > 30) entao
dose <- 750


fimse
fimse
fimse
fimse
fimse
fimse

gotas <- (dose * 20)/500

escreva("O paciente tomara:", gotas)

Fimalgoritmo
