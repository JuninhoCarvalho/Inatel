#include <iostream>
using namespace std;

int main()
{
	int a;
	int* p;
	
	p = &a;//p recebe o endereço de "a"
	
	cin >> *p;//entrada do dado que ira para onde p aponta
	
	cout << a << endl;//saida do valor inserido
	
	return 0;
}