#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <cstring>
using namespace std;

double x[10000000];

int main()
{
	double m, n;
	double soma=0;
	int k;
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
	{
		cin >> x[i];
	}	
	
	for(int i=0; i<n; i++)
	{
		if(x[i]>0)
		{
			k=i;
			break;
		}
	}
	
	for(int i=k; i<m+k; i++)
	{
		soma += x[i];
	}
	
	cout << soma << endl;
	
	return 0;
}