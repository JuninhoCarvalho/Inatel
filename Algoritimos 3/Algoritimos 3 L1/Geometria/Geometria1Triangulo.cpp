#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//struct dos pontos que serao inseridos
struct ponto
{
	float x;
	float y; 	
};
typedef ponto vetor;

//funcao para criar o vetor segmento
vetor cria_vetor(ponto A,ponto B)
{
	vetor AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	return AB;
}

//funcao para calculo do produto vetorial
float vetorial(vetor A,vetor B, vetor C)
{
	float v;
	v = (A.x*B.y + B.x*C.y + C.x*A.y + A.x*B.y)-(B.x*A.y + A.x*C.y + C.x*B.y + B.x*A.y);
	return v;
}

//funcao para calculo da area do triangulo
float area_triangulo(vetor A, vetor B, vetor C)
{
	float area;
	area = fabs(vetorial(A,B,C)) / 2;
	return area;
}

int main()
{
	vetor A[50];//ponto A
	vetor B[50];//ponto B
	vetor C[50];//ponto C
	int n;//qtd de grupos de coordenadas que serao inseridos
	
	cin >> n;//entrada para qtd
	
	//estrutura de repeticao para inserir as coordenadas
	for(int i=0; i<n; i++)
	{
		cin >> A[i].x >> A[i].y;
		cin >> B[i].x >> B[i].y;
		cin >> C[i].x >> C[i].y;
	}
	
	//estrutura para verificao da area e colinearidade
	for(int i=0; i<n; i++)
	{
		if(vetorial(A[i],B[i],C[i])==0)
			cout << "Nao formam triangulo" << endl;
		
		else
		{
			cout << fixed << setprecision(2);
			cout << area_triangulo(A[i],B[i],C[i]) << endl;
		}
	}	
		
	return 0;
}