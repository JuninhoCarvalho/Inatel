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

void MaiorPar(treenodeptr arvore, int &m)
{
    if (arvore != NULL)
    {
        MaiorPar(arvore->esq,m);
        if(arvore->info%2==0 && arvore->info > m)
            m = arvore->info;
        MaiorPar(arvore->dir,m);
    }
}

int maior(treenodeptr arvore)
{
    int m = -100000;
    MaiorPar(arvore,m);
    return m;
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

	cout << maior(arvore) << endl;

	tDestruir(arvore);

	return 0;
}
