Algoritmo "semnome"

Var
salario, valor, emprestimo:real

Inicio
escreva("Informe o sal�rio buto:")
leia(salario)
escreva("Informe o valor da presta��o:")
leia(valor)

emprestimo <- salario * 30/100

se(valor <= emprestimo ) ent�o
   escreva("Emprestimo concedido")
senao
   escreva("O emprestimo n�o pode ser concedido")
Fimse

Fimalgoritmo