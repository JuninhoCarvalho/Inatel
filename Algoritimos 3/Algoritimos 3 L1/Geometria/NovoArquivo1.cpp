#include <iostream>
#include <cmath> // operacoes matematicas
using namespace std;

struct ponto//struct para guardar coordenadas dos personagens
{
	float x;
	float y; 	
};
typedef ponto vetor;

struct reta
{
	ponto A;
	ponto B;   	
};
typedef reta segmento;

vetor cria_vetor(ponto A,ponto B)//funcao para criar vetor atraves de 2 pontos
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float vetorial(vetor A,vetor B)//funcao para calculo vetorial
{
	float v;
	v = A.x*B.y - A.y*B.x;
	return v;
}

/*
Posicao de C em relacao ao segmento AB
1 -> esquerda
-1 -> direita
0 -> colinear
*/
int sentido(ponto A,ponto B, ponto C)
{
	vetor AB;
	vetor AC;
	float vet;
	AB = cria_vetor(A,B);
	AC = cria_vetor(A,C);
	vet = vetorial(AB,AC);
	if(vet > 0)
		return 1;
	else if(vet < 0)
		return -1;
	else
		return 0;
}

/*
Verifica se o ponto P esta dentro do triangulo ABC
1 -> dentro
-1 -> fora
0 -> na linha
*/
int dentro_triangulo(ponto A, ponto B, ponto C, ponto P)
{
	int s1,s2,s3;
	s1 = sentido(A,B,P);
	s2 = sentido(B,C,P);
	s3 = sentido(C,A,P);
	if(s1 == s2 && s2 == s3)
		return 1; 
	else if(s1*s3 == -1 || s1*s2 == -1 || s2*s3 == -1)
		return -1;
	else
		return 0;
}

int main()
{
	//coordenadas
	ponto A;//pontos do heroi 1
	ponto B;//pontos do heroi 2
	ponto C;//pontos do heroi 3
	ponto R;//pontos do vilao
	
	//entrada das coordenadas de cada personagem
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
	cin >> R.x >> R.y;
	
	//verificacao se o vilao esta dentro do triangulo
	if(dentro_triangulo(A,B,C,R) == 1)
		cout << "Ataquem" << endl;//caso esteja ele é atacado
	
	//caso contrario nao é atacado
	else
		cout << "Preparem-se" << endl;
	
	return 0;
}