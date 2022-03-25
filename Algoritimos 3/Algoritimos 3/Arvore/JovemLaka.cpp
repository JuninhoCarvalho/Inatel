#include <iostream>
#include <cmath>
#include <iomanip>
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

void contador(treenodeptr arvore,int &c)//contador de elementos da arvore
{
	if (arvore != NULL)
	{
		contador(arvore->esq,c);
		contador(arvore->dir,c);
		c++;
	}
}

void preOrdem(treenodeptr arvore)//funcao para salvar em pre ordem
{
	int achou;
	
		if (arvore != NULL)
		{
			cout << arvore->info << " ";	
			//if(elemento == arvore->info)
			//	achou = n;
			
			preOrdem(arvore->esq);
			preOrdem(arvore->dir);
		}

	//cout << achou << endl;
//	return achou;	
	
}

void emOrdem (treenodeptr arvore)//funcao para salvar em ordem
{
	int achou;
	
		if (arvore != NULL)
		{
			emOrdem(arvore->esq);
			cout << arvore->info << " ";
			//if(elemento == arvore->info)
			//	achou = n;
			
			emOrdem(arvore->dir);
		}
	
	//cout << achou << endl;
//	return achou;
}

void posOrdem (treenodeptr arvore)//funcao para salvar em pos ordem
{
	int achou;
	
		if (arvore != NULL)
		{
			posOrdem(arvore->esq);
			posOrdem(arvore->dir);
			cout << arvore->info << " ";
			//if(elemento == arvore->info)
			//	achou = n;
		}
	
	//cout << achou << endl;
//	return achou;
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
	int n = 0;//contador para qtd de elementos na arvore
	int elemento;//elemento que sera a cidade X
	int indice1;
	int indice2;
	int indice3;

	do//inserindo dados != -1
	{
		cin >> x;

		if(x != -1)
			tInsere(arvore, x);

	}
	while(x != -1);

	//contador(arvore,n);

	//cin >> elemento;//entrada da cidade X
	
	//chamando as funcoes
	preOrdem(arvore);
	cout << endl;
	emOrdem(arvore);
	cout << endl;
	posOrdem(arvore);	
	cout << endl;
	
	/*
	//encontrando a posição do menor indicie
	if(indice1 < indice2 && indice1 < indice3)
		cout << "Pre" << endl;
			
	else if(indice2 < indice1 && indice2 < indice3)
		cout << "Em" << endl;
	
	else
		cout << "Pos" << endl;
	*/
	//destruindo a arvore	
	tDestruir(arvore);

	return 0;
}
