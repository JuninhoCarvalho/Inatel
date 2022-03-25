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

//funcao para empilhar em subarvores
void empilha(int v[], int n, int i) 
{ 
	int maior = i; // inicializar o maior como raiz
	int l = 2*i + 1; // indice para esquerda 
	int r = 2*i + 2; // indice para direita 

	//decisao para empilhar 
	if (l < n && v[l] > v[maior]) 
		maior = l; 

	//decisao para empilhar 
	if (r < n && v[r] > v[maior]) 
		maior = r; 

	//decisao para empilhar 
	if (maior != i) 
	{ 
		swap(v[i], v[maior]); 

		//chamada recursiva para empilhar 
		empilha(v, n, maior); 
	} 
} 

	//ordenacao com heapsort
void heapSort(int *v, int n) 
{ 
	// for para empilhamento 
	for (int i = n / 2 - 1; i >= 0; i--) 
		empilha(v, n, i); 

	// extraindo e ordenando a pilha 
	for (int i=n-1; i>=0; i--) 
	{ 
		// movendo o maior para o fim
		swap(v[0], v[i]); 

		// chamada recursiva para empilhamento ordenado 
		empilha(v, i, 0); 
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
		heapSort(vor, tamanho);

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

		heapSort(vor, tamanho);

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

		heapSort(vor, tamanho);

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

		heapSort(vor, tamanho);

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

		heapSort(vor, tamanho);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;
	
	return 0;
}
