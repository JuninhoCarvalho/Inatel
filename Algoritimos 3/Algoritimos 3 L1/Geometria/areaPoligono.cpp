#include <iostream>
#include <iomanip>
#include <cmath> // operacoes matematicas
#include <algorithm> // sort
#include <list> // para a pilha 
using namespace std;

struct ponto
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

vetor cria_vetor(ponto A,ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

float vetorial(vetor A,vetor B)
{
	float v;
	v = A.x*B.y - A.y*B.x;
	return v;
}

float escalar(vetor A,vetor B)
{
	float e;
	e = A.x*B.x + A.y*B.y;
	return e;
}

float area_triangulo(ponto A,ponto B,ponto C)
{
	vetor AB;
	vetor AC;
	float area;
	AB = cria_vetor(A,B);
	AC = cria_vetor(A,C);
	area = fabs(vetorial(AB,AC)) / 2;
	return area;
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

// Os pontos devem estar ordenados pelo angulo
// O poligono deve ser convexo
// Retorna a area do poligono
float area_poligono(ponto v[],int n)
{
	float area = 0;
	for(int i = 0;i < n-2;i++)
	{
		area = area + area_triangulo(v[0],v[i+1],v[i+2]);
	}
	return area;
}

int main()
{
	ponto v[6];
	
	for(int i=0; i<6; i++)//entrada das coordenadas
		cin >> v[i].x >> v[i].y;
	
	//saida para a area do poligono
	cout << fixed << setprecision(2) << "Area do escudo: " << area_poligono(v,6);

	return 0;
}