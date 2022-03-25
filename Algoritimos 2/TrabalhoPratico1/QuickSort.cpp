#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

//gera um vor com qtd elementos com valores inteiros de 0 a 10*quantidade
int* gerar(int qtd)
{
	srand(time(NULL));
	int *v = new int[qtd];
	for (int i = 0; i < qtd; i++)
		v[i] = rand() % (10 * qtd);
	return v;
}

//funcao para trocar dois elementos
void troca(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// funcao para definir um pivo
int particiona (int v[], int l, int r)
{
	int pivo = v[r]; // pivo
	int i = (l - 1); // indice do menor

	//for para trocar o pivo com o vor atual se necessario
	for (int j = l; j <= r - 1; j++)
	{
		if (v[j] < pivo)
		{
			i++; //incremento
			troca(&v[i], &v[j]);
		}
	}
	troca(&v[i + 1], &v[r]);
	return (i + 1);
}

// ordenacao com quick sort
void quickSort(int *v, int l, int r)
{
	if (l < r)
	{
		int pi = particiona(v, l, r); //chamada reccursiva para o pivo

		//chamada recursiva para ordenacao
		quickSort(v, l, pi - 1);
		quickSort(v, pi + 1, r);
	}
} 

int main()
{
	//variaveis para armazenar os instantes de tempo
	clock_t inicio, fim;

	// variaveis para armazenar o tempo total e calcular a media do tempo
	double total = 0.0, media;

	//quantidade de execucao
	int repet = 10;

	//tamanho para ordenacao de 10 vores
	int tamanho = 10;

	for (int i = 0; i < repet; i++)
	{
		//geracao do vor de inteiros aleatorios
		int *vor = gerar(tamanho);

		//marcacao do tempo antes da ordenacao
		inicio = clock();

		//chamada do algoritmo de ordenacao
		quickSort(vor, 0, 9);

		//marcacao do tempo depois da ordenacao
		fim = clock();

		//calculo do tempo que levou para ordenar
		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		//incrementa a contagem do tempo total;
		total += tempo;
	}
	//calcula a media do tempo para ordenar o vor
	media = (total / repet) * 1000;
	cout << "A ordenacao com 10 elementos ocorreu em " << media << " milisegundos\n" << endl;

	//variaveis para armazenar o tempo total e calcular a media do tempo
	total = 0.0;

	//tamanho para ordenacao de 100 elementos
	tamanho = 100;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);
		
		inicio = clock();

		quickSort(vor, 0, 99);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
		
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao de 1.000 elementos
	tamanho = 1000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);

		inicio = clock();

		quickSort(vor, 0, 999);

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

		quickSort(vor, 0, 9999);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
		
		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 10.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	total = 0.0;

	//tamanho para ordenacao de 100.000 elementos
	tamanho = 100000;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);
		
		inicio = clock();

		quickSort(vor, 0, 99999);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;
	
	return 0;
}
