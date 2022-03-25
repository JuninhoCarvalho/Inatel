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

//algoritmo de ordenacao (Selection Sort)
void selectionSort(int *v, int tam)
{
	for(int i=0; i<tam-1; i++)
	{
		//guardando o menor valor
		int menor = v[i];
		int pos_menor_valor;
		//busca o menor valor a partir de i+1
		for(int j=i+1; j<tam; j++)
		{
			if (v[j]<menor)
			{
				menor = v[j];//guardando o vor com o menor valor
				pos_menor_valor = j; //posicao deste elemento
			}
		}
		//trocando os elementos de posicao
		int aux = v[i];
		v[i] = menor; //atribuindo o menor valor para a posicao i
		v[pos_menor_valor] = aux; //atribuindo o valor da posicao i para a posicao de menor valor
	}
}

int main()
{
	//variaveis para armazenar os instantes de tempo
	clock_t inicio, fim;

	//variaveis para armazenar o tempo total e calcular a media do tempo
	double total = 0.0;
	double media;

	//quantidade de execucao
	int repet = 10;

	//tamanho para ordenacao como 10 elementos
	int tamanho = 10;

	for (int i = 0; i < repet; i++)
	{
		//geracao do vor de inteiros aleatorios
		int *vor = gerar(tamanho);

		//marcacao do tempo antes da ordenacao
		inicio = clock();

		//chamada da funcao de ordenacao
		selectionSort(vor, tamanho);

		//marcacao do tempo depois da ordenacao
		fim = clock();

		//calculo do tempo que levou para ordenar
		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 10 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao com 100 elementos
	tamanho = 100;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		selectionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
	
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao de 1000 elementos
	tamanho = 1000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		selectionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 1.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao de 10.000 elementos
	tamanho = 10000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		selectionSort(vor, tamanho);

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

		selectionSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	return 0;
}
