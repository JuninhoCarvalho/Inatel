# Avaliação Global 2021/1
# Nome: Francisco José Carvalho Junior
# Mat: 1628  
# Curso: GEC
# 5º Período

# Questão 3
from sympy import Integral, Symbol

#Função que representa o gráfico
def funcao(x,c):
    return (x**3 - 4*x**2 + 5*x - c)

c = 1628%10 #Constante c, onde c = matricula%10
x = Symbol('x') #Declarando a variável x

#area recebe o resultado da integral definida entre os pontos 0 e 5
area = Integral(funcao(x,c),(x,0,5)).doit()
#Saída para o resultado do calculo da integral
print("\nÁrea =", area, "\n")