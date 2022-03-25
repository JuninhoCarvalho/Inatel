#include <iostream>
using namespace std;

int main()
{
	int *v;//ponteiro para inteiro
	int *p;//ponteiro para varrer vetor de inteiro
	int n;//qtde de valores a serem inseridos
	int c=0;//contador para situacao
	
	cin >> n;//entrada para qtd
	
	v = new int[n];//aloca n espaços para o vetor de inteiros
	
	for(int i=0; i<n; i++)//entrada dos n valores
		cin >> v[i];
	
	//estrutura para ver quantos pares tem 
	for(int i=0; i<n; i++)
	{
		p = &v[i];
		if(*p%2==0 && *p>=0)
			c++;			
	}	
	
	//quantidade de pares positivos
	cout << c << endl;
	
	return 0;
}