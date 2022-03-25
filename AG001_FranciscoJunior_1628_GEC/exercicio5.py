# Avaliação Global 2021/1
# Nome: Francisco José Carvalho Junior
# Mat: 1628  
# Curso: GEC
# 5º Período

# Questão 5
from sympy import Symbol, solve, exp, sin

#Função para calculo da primeira equação
def equacao1(x,c):
    return (exp(x-3)+exp(x-1)+exp(x)-c-1)

#Função para calculo da segunda equação
def equacao2(x,c):
    return ((x**4) - (4*(x**3)) + (3*x) - c)

#Função para calculo da terceira equação
def equacao3(x,c):
    return (4*sin((c+1)*x)+2)

c = 1628%10 #Constante c, onde c = matricula%10
x = Symbol('x') #Definindo a variável x

e1 = equacao1(x,c) #e1 chama a primeira função
e2 = equacao2(x,c) #e2 chama a segunda função 
e3 = equacao3(x,c) #e3 chama a terceira função

resposta = solve(e1) #resposta resolve a equação 1 (e1) = 0
#Saida para a solução da primeira equação
print("\nA) Resposta para a equação 1 -> e^(x-3) + e^(x-1) + e^x = c+1:")
print("\nx =",resposta,"\n")

resposta = solve(e2) #resposta resolve a equação 2 (e2) = 0
#Saida para a solução da segunda equação
print("B) Resposta para a equação 2 -> x^4 - 4x^3 + 3x = c:")
print("\nx =", resposta, "\n")

resposta = solve(e3) #resposta resolve a equação 3 (e3) = 0
#Saida para a solução da terceira equação
print("C) Resposta para a equação 3 -> 4*sin[(c+1)*x] = -2:")
print("\nx =",resposta,"\n")