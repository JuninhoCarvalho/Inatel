# Avaliação Global 2021/1
# Nome: Francisco José Carvalho Junior
# Mat: 1628  
# Curso: GEC
# 5º Período

from numpy import matrix, linalg

c = 1628%10 #Constante c, onde c = matricula%10

#Definindo as matrizes para o sistema de equação
# 35*i1 + 0*i2 + 10*i3 = 10+(2*c)
# 10*i1 + 0*i2 + 30*i3 = 5+(2*c)
# -i1 + i2 - i3 = 0

A = matrix([
    [35, 0, 10], # 35*i1 + 0*i2 + 10*i3
    [10, 0, 30], # 10*i1 + 0*i2 + 30*i3
    [-1, 1, -1] # -i1 + i2 - i3
])

B = matrix([
    [10+(2*c)], # = 10+(2*c)
    [5+(2*c)], # = 5+(2*c)
    [0]
])

A_Inv = linalg.inv(A) #A_Inv recebe a matriz inversa de A

Correntes = A_Inv*B #Solução para o sistema de equações

# Saída para o resultado das correntes
for i in range(3):
    print("i%d = %f [A]" %(i+1,Correntes[i]))