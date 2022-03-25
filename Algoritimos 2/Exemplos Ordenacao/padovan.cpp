#include <iostream>
using namespace std;

int padovan(int n)
{
	int p;
	
	if(n==0 || n==1 || n==2)
		p = 1;

	else
		p = padovan(n-2)+padovan(n-3);
	
	return p;
}

int main()
{
	int n;
	int p;
	
	cin >> n;
	
	p = padovan(n);
	
	cout << p << endl;
	
	return 0;
}