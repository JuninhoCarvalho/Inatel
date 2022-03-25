#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//estrutura para armazenar dados na arvore
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};

typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, int x)//funcao inserir elementos na arvore
{
	if (p == NULL)//insere na raiz
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}

	else if(x < p->info) // insere na subarvore esquerda
		tInsere(p->esq, x);


	else // insere na subarvore direita
		tInsere(p->dir, x);
}

treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL) // elemento n~ao encontrado
		return NULL;

	else if (x == p->info) // elemento encontrado na raiz
		return p;

	else if (x < p->info) // procura na sub´arvore esquerda
		return tPesq(p->esq, x);

	else // procura na sub´arvore direita
		return tPesq(p->dir, x);
}

void crescente(treenodeptr arvore)
{
	if (arvore != NULL)
	{
		crescente(arvore->esq);
		cout << arvore->info << " ";
		crescente(arvore->dir);
	}
}

treenodeptr tMenor(treenodeptr &raiz)
{
	treenodeptr t;
	t = raiz;
	if (t->esq == NULL) // encontrou o menor valor
	{
		raiz = raiz->dir;
		return t;
	}
	else // continua a busca na sub´arvore esquerda
		return tMenor(raiz->esq);
}

int tRemove(treenodeptr &raiz, int x)
{
	treenodeptr p;
	if (raiz == NULL) //arvore vazia
		return 1;

	if (x == raiz->info)
	{
		p = raiz;
		if (raiz->esq == NULL) // a raiz n~ao tem filho esquerdo
			raiz = raiz->dir;
		else if (raiz->dir == NULL) // a raiz n~ao tem filho direito
			raiz = raiz->esq;
		else // a raiz tem ambos os filhos
		{
			p = tMenor(raiz->dir);
			raiz->info = p->info;
		}
		delete p;
		return 0;
	}
	else if (x < raiz->info)
		return tRemove(raiz->esq, x);
	else
		return tRemove(raiz->dir, x);

}

void tDestruir(treenodeptr &arvore)
{
	if (arvore != NULL)
	{
		tDestruir(arvore->esq);
		tDestruir(arvore->dir);
		delete arvore;
	}

	arvore = NULL;
}

int main()
{
	treenodeptr arvore = NULL;//inicializando a arvore
	int x;//var aux para elementos a serem inseridos

	do//inserindo dados !=-1
	{
		cin >> x;

		if(x != 0)
			tInsere(arvore, x);

	}
	while(x != 0);

	int remov;//valor que sera removido

	cin >> remov;
	
	do
	{
		tRemove(arvore, remov);
		
	}while(tRemove(arvore, remov) != 1);
	
	crescente(arvore);

	tDestruir(arvore);

	return 0;
}
