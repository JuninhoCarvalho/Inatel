#include <iostream>
using namespace std;

//estrutura para armazenar dados na arvore
struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, int x)
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

//funcao para mostrar elementos em ordem decrescente
void decrescente(treenodeptr arvore)
{
	if (arvore != NULL)
	{
		decrescente(arvore->dir);
		cout << arvore->info << " ";
		decrescente(arvore->esq);
	}
}

int main()
{
	treenodeptr arvore = NULL;//inicializando a arvore

	int x;
	
	do//inserindo dados !=-1
	{
		cin >> x;

		if(x != -1)
			tInsere(arvore, x);
	}
	while(x != -1);

	decrescente(arvore);//chamada da funcao
	
	return 0;
}