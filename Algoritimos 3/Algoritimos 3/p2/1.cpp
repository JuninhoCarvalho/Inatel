#include <iostream>
using namespace std;

int main()
{
	float v[100];//vetor para guardar os elementos
	float *p;//ponteiro para float
	int n;//qtd de elementos a serem inseridos no vetor
	int c=0;//contador para verificacao
	float x;//elemento a ser buscado
	
	cin >> n;//entrada para qtd
	
	//entrada de n elementos
	p = v;//Entrada atraves de um ponteiro para o vetor
	for(int i=0; i<n; i++)
	{
		cin >> *p;
		p++;
	}
	
	//entrada para o numero que deseja verificar se esta presente no vetor
	cin >> x;
	
	//Verificacao se o elemento esta no vetor
	p = v;//Percorrendo atraves de um ponteiro
	for(int i=0; i<n; i++)
	{
		if(*p == x)
			c++;	
	
		p++;   	
	}	
	
	//saida para caso o elemento esta presente
	if(c>0)
		cout << x << " foi encontrado no vetor" << endl;
	
	//caso nao esteja presente
	else
		cout << x << "  nao esta no vetor" << endl;
	
	return 0;
}