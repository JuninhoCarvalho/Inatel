#include <iostream>
using namespace std;

int main()
{
	int vet[]={15,8,2,7,21,13,6,17};//vetor
	int tam = 8;//tamanho para qtd de comparacoes
	int i;//contador i
	int j;//contador j
	int aux;//variavel auxiliar
	bool troca;
	int trocas=0;
	int comparacao=0;
	
	//bubble sort
	for(i=0;i<tam;i++)
	{
		troca = false;
		
		for(j=0;j<tam-i-1;j++)//repeticao para comparacao dos pares adjacentes
		{
			comparacao++;
			if(vet[j]>vet[j+1])
			{
				//troca de valores no vetor
				cout << "Antes: " << vet[j] << " " << vet[j+1] << endl;
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1]=aux;
				cout << "Depois: " << vet[j] << ' ' << vet[j+1] << endl;
				trocas++;
				cout << endl;
				troca = true;
			}
		}
		
		if(troca==false)
		   	break;
			
			
	}
	
	cout << endl;
		
	//saida para o vetor ordenado
	for(i=0;i<tam;i++)
		cout << vet[i] << ' ';
		
	cout << endl;
	
	cout << trocas << " trocas" << endl;
	cout << comparacao << " comparacoes" << endl;
	return 0;
}