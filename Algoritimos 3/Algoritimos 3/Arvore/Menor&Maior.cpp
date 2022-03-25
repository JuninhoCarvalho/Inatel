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

int pMenor(treenodeptr raiz)
{
	if (raiz->esq == NULL) // encontrou o menor 
	{
		 return raiz->info;
    }		
	else // continua a busca na subarvore esquerda
		return pMenor(raiz->esq);
}

int pMaior(treenodeptr raiz)
{
	if (raiz->dir == NULL) // encontrou o maior 
	{
		 return raiz->info;
    }		
	else // continua a busca na subarvore dir
		return pMaior(raiz->dir);
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
	int t = 0;

	do//inserindo dados !=-1
	{
		cin >> x;

		if(x != -1)
			tInsere(arvore, x);

	}
	while(x != -1);

	cout << pMenor(arvore) << " e " << pMaior(arvore);//saida pa

	tDestruir(arvore);

	return 0;
}
