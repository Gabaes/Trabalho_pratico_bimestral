Algoritmo "semnome"

Var
a0, a1, ai, i: inteiro


Inicio

escreva("Digite os dois primeiros termos: ")
leia(a0, a1)
escreva("a0")
escreva ("a1")

para i := 2 ate 10 faça
se i % 2 = 0 entao
ai <- a1- a0
senao
ai <- a1 + a0
fimse
escreva(ai)
a0 <- a1
a1 <- ai
fimpara

Fimalgoritmo