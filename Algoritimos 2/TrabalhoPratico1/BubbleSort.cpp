#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;

//gera um vor com qtd elementos com valores inteiros de 0 a 10*quantidade
int* gerar(int qtd)
{
	srand(time(NULL));
	int *v = new int[qtd];
	for (int i = 0; i<qtd; i++)
		v[i] = rand() % (10 * qtd);
	return v;
}

//algoritimo de ordenacao Bubble Sort
void BubbleSort(int *v, int tam)
{
	bool ordenado = false;
		for (int i = 0; i < tam; i++)
	{
		//ordenacao dos vetores
		for(int j=0; j<tam-i-1; j++)
		{
			if (v[j] > v[j+1])
			{
				ordenado = true;
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
		//caso para posicao ja ordenada
		if(ordenado == false)
			break;
	}
}

int main()
{
	//variaveis para os instantes de tempo
	clock_t inicio, fim;

	//variaveis para armazenar o tempo total e calcular a media do tempo
	double total = 0.0;
	double media;

	//qtd de execucao
	int repet = 10;

	//guarda a qtd de elementos do vetor
	int tamanho = 10;

	for (int i = 0; i < repet; i++)
	{
		//geracao de inteiros aleatorios
		int *vor = gerar(tamanho);

		//tempo antes da ordenacao
		inicio = clock();

		//chamada da funcao do algoritmo de ordenacao
		BubbleSort(vor, tamanho);

		//tempo depois da ordenacao
		fim = clock();

		// calculo do tempo que levou para ordenar (em milisegundos)
		double tempo = ((double)(fim-inicio))/CLOCKS_PER_SEC;
	
		// incrementa a contagem do tempo total;
		total += tempo;
	}
	//calcula a media do tempo para ordenar o vor
	media = (total/repet)*1000;
	cout << "A ordenacao com 10 elementos ocorreu em " << media << " milisegundos\n" << endl;

	//variaveis para armazenar o tempo total e calcular a media do tempo
	total = 0.0;

	//tamanho para ordenacao de 100 vores
	tamanho = 100;

	for (int i=0; i<repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		BubbleSort(vor, tamanho);

		fim = clock();

		double tempo = ((double)(fim - inicio))/CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//ordenacao com 1000 vores
	tamanho = 1000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		BubbleSort(vor, tamanho);

		fim = clock();

		double tempo = ((double)(fim-inicio))/CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total/repet)*1000;
	cout << "A ordenacao com 1.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//ordenacao com 100000 vores
	tamanho = 10000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		BubbleSort(vor, tamanho);

		fim = clock();

		double tempo = ((double)(fim - inicio))/CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total/repet)*1000;
	cout << "A ordenacao com 10.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//ordenacao com 10 vores
	tamanho = 100000;

	for (int i=0; i<repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		BubbleSort(vor, tamanho);

		fim = clock();

		double tempo = ((double)(fim-inicio))/CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total/repet)*1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	return 0;
}
