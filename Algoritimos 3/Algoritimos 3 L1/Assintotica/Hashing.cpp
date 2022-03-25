#include <iostream>

using namespace std;

// tamanho da tabela hash (preferencialmente primo)
#define m 9707

//tabela hash
int tabela[m];

int sondagem_linear(int k, int i)
{
	int h;
	h = k % m;
	return (h + i) % m;
}

int sondagem_quadratica(int k,int i)
{
	int h;
	h = k % m;
	return (h + 1*i + 3*i*i) % m; // constante1 = 1 e constante2 = 3 (constantes n�o nulas)
}

int hashing_duplo(int k,int i)
{
	int h1,h2;
	h1 = k % m;
	h2 = 1 + (k % (m-1));
	return (h1 + i*h2) % m;
}

int hash_insert(int info,int tabela[])
{
	int i; // numero de colis�es nessa inser��o
	int j; // posi��o em que o valor ser� salvo
	int k; // chave (key)
	k = info;
	i = 0; // ainda n�o ocorreu nenhuma colis�o
	do
	{
		j = sondagem_linear(k,i);
		if(tabela[j] == -1) // posi��o vazia
		{
			tabela[j] = info;
			return j;
		}
		i++; // houve uma colis�o
	}while(i < m);
	return -1; // tabela cheia
}

int hash_search(int info,int tabela[])
{
	int i; // numero de colis�es nessa inser��o
	int j; // posi��o em que o valor ser� salvo
	int k; // chave (key)
	k = info;
	i = 0;
	do
	{
		j = sondagem_linear(k,i); // utilizar a mesma fun��o da hash_insert
		if(tabela[j] == info) // encontrado
			return j;
		i++;
	}while(i < m && tabela[j] != -1); // enquanto n�o passar por todas as posi��es ou achar uma posi��o vazia
	return -1; // n�o encontrado
}

void init(int tabela[])
{
	for(int i = 0;i < m;i++)
		tabela[i] = 1; // flag para indicar uma posi��o livre
}

int main()
{
	init(tabela);
	for(int i=0; i<m; i++)
	{
		hash_insert(1,tabela);
	}
	
	return 0;
}