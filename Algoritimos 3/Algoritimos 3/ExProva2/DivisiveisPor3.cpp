#include <iostream>
using namespace std;

int main()
{
	int *v;//ponteiro para inteiro
	int *p;//ponteiro para varrer vetor de inteiro
	int n;//qtde de valores a serem inseridos
	int c=0;//contador para situacao
	
	cin >> n;//entrada para qtd
	
	v = new int[n];//aloca n espa�os para o vetor de inteiros
	
	for(int i=0; i<n; i++)//entrada dos n valores
		cin >> v[i];
	
	//estrutura para verificar quantos sao divisiveis por 3 
	for(int i=0; i<n; i++)
	{
		p = &v[i];
		if(*p%3 == 0)
			c++;	
	}	
	
	//quantidade de elementos que sao divisiveis por 3
	cout << c << endl;
	
	delete(v);
	
	return 0;
}