#include <iostream>
using namespace std;

int main()
{
	int vet[]={5, 1, 4, 2, 8, 9};//vetor
	int tam = 6;//tamanho para qtd de comparacoes
	int i;//contador i
	int j;//contador j
	int aux;//variavel auxiliar
	
	//bubble sort
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam-i-1;j++)//repeticao para comparacao dos pares adjacentes
		{
			if(vet[j]>vet[j+1])
			{
				//troca de valores no vetor
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
	
	//saida para o vetor ordenado
	for(i=0;i<tam;i++)
		cout << vet[i] << ' ';
	
	return 0;
}