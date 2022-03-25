#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x[50];//vetor das temperaturas
	float* p;//ponteiro tipo float
	int n;//qtd de temp que serao inseridas
	
	cin >> n;//entrada para qtd
	
	//entrada de "n" temperaturas
	for(int i=0; i<n; i++)
		cin >> x[i];
	
	//p recebe o endereço da primeira temperatura
	p = &x[0];
	
	//estrutura para achar a menor temperatura
	for(int i=1; i<n; i++)
	{
		if(x[i]<*p)
			p = &x[i];
	}	
	
	//saida da menor temp. com 2 casas decimais
	cout << fixed << setprecision(2);
	cout << *p << endl;
	
	return 0;
}