# Avaliação Global 2021/1
# Nome: Francisco José Carvalho Junior
# Mat: 1628
# Curso: GEC
# 5º Período

# Questão 1
from sympy import Limit, Symbol, S

#Definindo uma nova função onde será calculado o primeiro limite
def limite1(x,c):
    return ((3 * x**3 - 3)/(4 * x**2 - 4))*(c+1)

#Definindo uma nova função onde será calculado o segundo limite
def limite2(x,c):
    return ((3 * x**3 - 3)/(4 * x**2 - 4))*(c+1)

#Definindo uma nova função onde será calculado o terceiro limite
def limite3(x,c):
    return ((3 * x**3 - 3)/(4 * x**2 - 4))*(c+1)

c = 1628%10 #Constante c, onde c = matricula%10
x = Symbol('x') #Declarando a variável x    

#Calcula o limite da função para x -> 1
Resposta = Limit(limite1(x,c),x,1).doit()
print("Limite 1 =", Resposta)
print("\n"*1)

#Calcula o limite da função para x -> infinito
Resposta = Limit(limite2(x,c),x, S.Infinity).doit()
print("Limite 2 =", Resposta)
print("\n"*1)

#Calcula o limite da função para x -> -infinito
Resposta = Limit(limite3(x,c),x, -S.Infinity).doit()
print("Limite 3 =", Resposta)