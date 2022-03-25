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
		tInsere(p->esq,x);
	
	else // insere na subarvore direita
		tInsere(p->dir,x);
}

//estrutura para pesquisar se o elemento esta na arvore
treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL) // elemento n~ao encontrado
		return NULL;
	
	else if (x == p->info) // elemento encontrado na raiz
		return p;
	
	else if (x < p->info) // procura na sub´arvore esquerda
		return tPesq(p->esq,x);
	
	else // procura na sub´arvore direita
		return tPesq(p->dir,x);
}

void emOrdem (treenodeptr arvore)
{
	if (arvore != NULL)
	{
		emOrdem(arvore->esq);
		cout << arvore->info << " ";
	   	emOrdem(arvore->dir);
	}
}

void contarFolhas(treenodeptr arvore)
{
	int c=0;

	if(arvore != NULL)
	{	
		if(arvore->dir == NULL && arvore->esq == NULL)
			c++;
		
		else
		{
			contarFolhas(arvore->dir);
			contarFolhas(arvore->esq);
		}
	}

	cout << c;
}

void tDestruir (treenodeptr &arvore)
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
	int x;
	
	do
	{
		cin >> x;
		tInsere(arvore,x);
	
	}while(x != -1);
	
	contarFolhas(arvore);
	tDestruir(arvore);
	
	return 0;
}