#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float vet[] = {15,8,2,7,21,13,6,17};
	int tam = sizeof(vet) / sizeof(vet[0]);
	int menor;
	int i;
	int j;
	int pos;
	int comparacao=0;
	int troca=0;
	
	for(i = 0; i < tam; i++)
	{
		menor = vet[i];

		for(j = i + 1; j < tam; j++)
		{
			comparacao++;
			if(vet[j] < menor)
			{
				menor = vet[j];
				pos = j;
			}
		}
		int aux = vet[i];
		vet[i] = menor;
		vet[pos] = aux;
		troca++;

		cout << vet[i] << ' ';
	}
	
	cout << "\n" << "Trocas: " << troca << endl;
	cout << "Comparacoes: " << comparacao << endl;
	
	return 0;
}
