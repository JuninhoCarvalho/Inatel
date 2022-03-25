#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

//gera um vetor com qtd elementos com valores inteiros de 0 a 10*quantidade
int* gerar(int qtd)
{
	srand(time(NULL));
	int *v = new int[qtd];
	for (int i = 0; i < qtd; i++)
		v[i] = rand() % (10 * qtd);
	return v;
}

//algoritmo de ordenacao simples (Insertion Sort)
void insertionSort(int *v, int tam)
{
	for(int i = 1; i < tam; i++)
	{
		int j = i; //variavel para contagem do while
		int aux = v[i]; //variavel aux para ordenacao
		while (j>0 && v[j-1]>aux) //while para percorrer o vor
		{
			v[j] = v[j-1]; //movendo o maior valor para direita
			j--; //decremento do j
		}
		v[j] = aux; //colocando o valor menor a esquerda do maior
	}
}

int main()
{
	//variaveis para armazenar os instantes de tempo
	clock_t inicio, fim;

	//variaveis para armazenar o tempo total e calcular a media do tempo
	double total = 0.0, media;

	//qtd de execucao
	int repet = 10;

	//tamanho para ordenacao com 10 elementos
	int tamanho = 10;

	for (int i = 0; i < repet; i++)
	{
		//geracao de inteiros aleatorios
		int *vor = gerar(tamanho);

		//tempo antes da ordenacao
		inicio = clock();

		//chamada do algoritmo de ordenacao
		insertionSort(vor, tamanho);

		//tempo depois da ordenacao
		fim = clock();

		//calculo do tempo que levou para ordenar
		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		//incrementa a contagem do tempo total;
		total += tempo;
	}
	// calcula a media do tempo para ordenar o vor
	media = (total/repet)*1000;
	cout << "A ordenacao com 10 elementos ocorreu em " << media << " milisegundos\n" << endl;

	// variaveis para armazenar o tempo total e calcular a media do tempo
	total = 0.0;

	//tamanho para ordenacao com 100 elementos
	tamanho = 100;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		insertionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
	
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao com 1000 elementos
	tamanho = 1000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		insertionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
	
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 1.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	// para ordenacao de 10.000 elementos
	tamanho = 10000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		insertionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 10.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao com 100.000 elementos
	tamanho = 100000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		insertionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
	
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	return 0;
}
