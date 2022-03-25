#include <iostream>
using namespace std;

int particionar(int v[], int l, int r)
{
	int i=l-1;
	int j;
	int x=v[r];
	int aux;
	
	for(j=l; j<r; j++)
	{
		if(v[j]<=x)
		{
			i++;
			aux=v[j];
			v[j]=v[i];
			v[i]=aux;
		}
	}
	
	aux=v[i+1];
	v[i+1]=v[r];
	v[r]=aux;
	
	return i+1;
}

int quick_sort(int v[], int l, int r)
{
	int pivo=l;
	
	if(l<r)
	{
		particionar(v,l,r);
		quick_sort(v,l,pivo-1);
		quick_sort(v,pivo+1,r);
	}
	
	return pivo;
}

int main()
{
	int v[]={9, 1, 5, 200, 9, 2, 3};
	int tam;
	int l, r;
	
	tam=sizeof(v)/sizeof(v[0]);
	l=0;
	r=tam-1;
	
	quick_sort(v,l,r);
	
	for(int i=0;i<tam;i++)
		cout << v[i] << ' ';
	
	return 0;
}