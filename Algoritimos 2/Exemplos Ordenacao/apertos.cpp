#include <iostream>
using namespace std;

int apertos(int p)
{
	int x;
	
	x=p;
	
	if(p==2)
		x = 1;
	else
		x = p-1 + apertos(p-1);
	
	return x;
}

int main()
{
	int p;
	
	cin >> p;
	
	cout << apertos(p);
							
	return 0;
}