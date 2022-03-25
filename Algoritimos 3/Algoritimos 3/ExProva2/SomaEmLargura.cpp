#include <iostream>
#include <cmath>
#include <iomanip>
#include <list>
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

int SomaEmLargura(treenodeptr t)//funcao percorre arvore em nivel e soma os elementos
{
	treenodeptr n;
	list<treenodeptr> q;
	int soma=0;
	
	if(t!=NULL)
	{
		q.push_back(t);
		
		while(!q.empty())
		{
			n = *q.begin();
			q.pop_front();
			if(n->esq != NULL)
				q.push_back(n->esq);
			
			if(n->dir != NULL)
				q.push_back(n->dir);
			
			soma += n->info;
		}
	}
	
	return soma;
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

		if(x != -1)
			tInsere(arvore, x);

	}
	while(x != -1);
	
	cout << SomaEmLargura(arvore) << endl;//saida para a soma

	tDestruir(arvore);

	return 0;
}
