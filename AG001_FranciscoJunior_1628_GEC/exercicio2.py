# Avaliação Global 2021/1
# Nome: Francisco José Carvalho Junior
# Mat: 1628  
# Curso: GEC
# 5º Período

# Questão 2
from sympy import Derivative, Symbol

#Função que representa a equação do Deslocamento em função de "t"
def eqDeslocamento(t,c):
    return ((-t**3)/3 + 2*t**2 - c)

c = 1628%10 #Constante c, onde c = matricula%10 
t = Symbol('t') #Declarando a variável t

#eqVelocidade recebe derivada da equação do Deslocamento, retornando a equação da Velocidade em função de "t"
eqVelocidade = Derivative(eqDeslocamento(t,c),t).doit()
#Resultado para a derivada de primeira ordem, equação da velocidade
print("\nv(t) =", eqVelocidade, "[m/s]\n")

#V3 recebe valor da velocidade em t = 3
V3 =  Derivative(eqDeslocamento(t,c),t).doit().subs({t:3})
#Resultado da velocidade em t = 3
print("\nv(3) =", V3, "[m/s]\n")

#eqAceleracao recebe derivada de segunda ordem da equação do Deslocamento, retornando a equação da Aceleração em função de "t"
eqAceleracao = Derivative(eqDeslocamento(t,c),t,2).doit()
#Resultado para a derivada de segunda ordem, equção da aceleração
print("\na(t) =", eqAceleracao, "[m/s²]\n")

#A5 recebe valor da aceleração em t = 5
A5 =  Derivative(eqDeslocamento(t,c),t,2).doit().subs({t:5})
#Resultado da aceleração em t = 5
print("\na(5) =", A5, "[m/s²]\n")