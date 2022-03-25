#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
	int n, l, r;

	cin >> n >> l >> r;   	
	
	int d[n];   	
	int v[n];
	int cont=0;
	
	for(int i=0; i<n; i++)
	{
		cin >> v[i];
	}
	   
	for(int i=0; i<n; i++)
	{
		if(v[i]>=l && v[i]<=r)
		{
			d[i]=v[i];
			cont++;
		}	
	}   
	   
	int c;
	
	int esse;
	
	
	if(cont!=0)
	{
		c = d[0];
		
		for(int i=1; i<cont; i++)
		{
			if(d[i]>c)
			{
				esse = d[i];
			}
			
			else
			{
			  esse = d[i-1];	
			}
		}
		
		cout << esse << endl;     
	}		
	
	else
	{
		cout << "procure em outra loja" << endl;
	}
 	
	return 0;
}