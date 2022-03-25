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

//funcao para dividir o vetor
void merge(int v[], int l, int m, int r) 
{ 
    int i, j, c; 
    int p1 = m - l + 1; 
    int p2 =  r - m; 
  
    //criando dois vores auxiliares
    int L[p1], R[p2]; 
  
    //copiando os vores 
    for (i = 0; i < p1; i++) 
        L[i] = v[l + i]; 
    for (j = 0; j < p2; j++) 
        R[j] = v[m + 1+ j]; 
  
    //inicializacao dos indices
    i = 0;  
    j = 0;  
    c = l;  
    while (i < p1 && j < p2) 
    { 
        if (L[i] <= R[j]) 
        { 
            v[c] = L[i]; 
            i++; 
        } 
        else
        { 
            v[c] = R[j]; 
            j++; 
        } 
        c++; 
    } 
  
    //copiar elementos do L se houver
    while (i < p1) 
    { 
        v[c] = L[i]; 
        i++; 
        c++; 
    } 
  
    //copiar elementos do R se houver
    while (j < p2) 
    { 
        v[c] = R[j]; 
        j++; 
        c++; 
    } 
} 
  
//chamada recursiva para ordenacao dos elementos
void mergeSort(int v[], int l, int r) 
{ 
    if (l < r) 
    { 
        //busca o meio do vetor
        int m = l+(r-l)/2; 
  
        //repartindo no meio
        mergeSort(v, l, m); 
        mergeSort(v, m+1, r); 
  		
  		//chamada recursiva para funcao de mesclar os vetores
        merge(v, l, m, r); 
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
		//geracao do vetor de inteiros aleatorios
		int *vor = gerar(tamanho);

		//marcacao do tempo antes da ordenacao
		inicio = clock();

		//chamada do algoritmo de ordenacao
		mergeSort(vor, 0, 9);

		//marcacao do tempo depois da ordenacao
		fim = clock();

		//calculo do tempo que levou para ordenar
		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		//incrementa a contagem do tempo total;
		total += tempo;
	}
	//calcula a media do tempo para ordenar o vetor
	media = (total / repet) * 1000;
	cout << "A ordenacao com 10 elementos ocorreu em " << media << " milisegundos\n" << endl;

	// variaveis para armazenar o tempo total e calcular a media do tempo
	total = 0.0;

	//tamanho para ordenacao de 100 elementos
	tamanho = 100;

	for (int i = 0; i < repet; i++)
	{
		int *vor = gerar(tamanho);
		
		inicio = clock();

		mergeSort(vor, 0, 99);

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

		mergeSort(vor, 0, 999);

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

		mergeSort(vor, 0, 9999);

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

		mergeSort(vor, 0, 99999);

		fim = clock();

		double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

		total += tempo;
	}
	media = (total / repet) * 1000;
	cout << "A ordenacao com 100.000 elementos ocorreu em " << media << " milisegundos\n" << endl;

	return 0;
}
