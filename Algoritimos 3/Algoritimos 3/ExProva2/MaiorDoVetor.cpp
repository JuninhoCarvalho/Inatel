#include <iostream>
using namespace std;

int main()
{
	int *v;//ponteiro para inteiro
	int *p;//ponteiro para varrer vetor de inteiro
	int n;//qtde de valores a serem inseridos
	
	cin >> n;//entrada para qtd
	
	v = new int[n];//aloca n espaços para o vetor de inteiros
	
	for(int i=0; i<n; i++)//entrada dos n valores
		cin >> v[i];
	
	for(int i=n; i>0; i--)//achando o primeiro numero par para ser comparado posteriormente
		if(v[i]%2==0)
			p=&v[i];
	
	//estrutura para verificar qual o maior par 
	for(int i=0; i<n; i++)
		if(v[i] > *p && v[i]%2==0)
			p=&v[i];
	
	//valor do maior numero par
	cout << *p << endl;
	
	delete(v);//retira espaco da memoria que foi usada
	
	return 0;
}