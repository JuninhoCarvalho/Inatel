#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;//qtd de numeros a serem inseridos
	int *p;//ponteiro para inserir dados no vetor
	int *v;//vetor que guardara os valores
	float soma=0;
	
	cin >> n;
	
	v = new int[n];//criando vetor de n posicoes
	
	//inserindo dados no vetor
	for(int i=0; i<n; i++)
		cin >> v[i];
	
	//varrendo o vetor e somando
	for(int i=0; i<n; i++)
	{
		p = &v[i];
		soma += *p;
	}
	
	cout << soma/n*1.0 << endl;//saida da media
	
	return 0;
}