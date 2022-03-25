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
int main()
{
	treenodeptr arvore = NULL;//inicializando a arvore
	treenodeptr q;//ponteiro auxiliar
	
	//inserindo dados na arvore
	tInsere(arvore, 14);
	tInsere(arvore,15);
	tInsere(arvore,4);
	
	q = tPesq(arvore,0);
	
	if(q != NULL)
		cout << "Elemento encontrado" << endl;
	
	else
		cout << "Elemento nao encontrado" << endl;

	return 0;
}