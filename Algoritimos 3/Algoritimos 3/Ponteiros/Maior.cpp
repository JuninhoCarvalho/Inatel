#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *v;
	int *p;
	int n;
	
	cin >> n;//entrada para qtd
	
	v = new int[n];
	
	for(int i=0; i<n; i++)
		cin >> v[i];
	
	//p recebe o endereço do primeiro elemento
	p = &v[0];
	
	//estrutura para achar o maior elemento
	for(int i=1; i<n; i++)
	{
		if(v[i]>*p)
			p = &v[i];
	}	
	
	cout << *p << endl;
	
	return 0;
}