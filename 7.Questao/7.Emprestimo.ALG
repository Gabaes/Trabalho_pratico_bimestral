Algoritmo "semnome"

Var
salario, valor, emprestimo:real

Inicio
escreva("Informe o salário buto:")
leia(salario)
escreva("Informe o valor da prestação:")
leia(valor)

emprestimo <- salario * 30/100

se(valor <= emprestimo ) então
   escreva("Emprestimo concedido")
senao
   escreva("O emprestimo não pode ser concedido")
Fimse

Fimalgoritmo