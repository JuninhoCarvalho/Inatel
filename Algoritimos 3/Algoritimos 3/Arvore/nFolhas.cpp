#include <iostream>
#include <stdlib.h>
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

void contf(treenodeptr arvore, int &nFolhas)//funcao contar quantas folhas ha
{
	if (arvore != NULL)
	{
		contf(arvore->esq, nFolhas);
		contf(arvore->dir, nFolhas);

		if(arvore->esq == NULL && arvore->dir == NULL)
			nFolhas++;
	}
}

int conta_folhas(treenodeptr arvore)//funcao auxiliar para contar folhas
{
	int nFolhas = 0; // número de folhas da árvore

	contf(arvore, nFolhas);

	return nFolhas;
}

void tDestruir(treenodeptr &arvore)
{
	if (arvore->info != NULL)
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

		if(x != -1)
			tInsere(arvore, x);

	}
	while(x != -1);

	cout << conta_folhas(arvore) << endl;//saida da qtd de folhas na arvore

	tDestruir(arvore);

	return 0;
}
