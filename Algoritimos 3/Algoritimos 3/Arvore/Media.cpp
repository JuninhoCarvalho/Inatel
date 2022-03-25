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

void somador(treenodeptr arvore,float &soma)//soma dos elementos presentes na arvore
{
	if (arvore != NULL)
	{
		somador(arvore->esq,soma);
		soma += arvore->info;
		somador(arvore->dir,soma);
	}
}

void contador(treenodeptr arvore,float &c)//contador de elementos da arvore
{
	if (arvore != NULL)
	{
		contador(arvore->esq,c);
		contador(arvore->dir,c);
		c++;
	}
}

float media(treenodeptr arvore)//funcao para calculo da media
{
	float soma = 0;
	float c=0;
	
	somador(arvore, soma);
	contador(arvore,c);
	
	return soma/c;
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
		
	}while(x != -1);

	cout << fixed << setprecision(2);
	cout << "Media: " << media(arvore) << endl;//saida da media com 2 casas decimais
	
	tDestruir(arvore);
	
	return 0;
}
