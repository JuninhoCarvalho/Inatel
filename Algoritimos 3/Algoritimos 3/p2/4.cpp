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

void contador(treenodeptr arvore, float &c) //contador de elementos da arvore
{
	if (arvore != NULL)
	{
		contador(arvore->esq, c);
		contador(arvore->dir, c);
		c++;
	}
}

float calcMedia(treenodeptr arvore, float c)//funcao percorre arvore em nivel e soma os elementos
{
	list<treenodeptr> q; // fila auxiliar
	treenodeptr n = arvore; // ponteiro para varrer a árvore
	float soma = 0;
	if (arvore != NULL)
	{
		q.push_front(n);
		while (!q.empty())
		{
			n = q.front();
			q.pop_front();
			
			if (n->esq != NULL)
				q.push_back(n->esq);
			
			if (n->dir != NULL)
				q.push_back(n->dir);
			
			soma += n->info;//soma dos elementos presentes na arvore
		}
	}

	return soma / c;//retorna a media
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

	float n = 0;//contador para quantidade de elementos na arvore

	contador(arvore, n);//chamada da funcao para contador

	cout << fixed << setprecision(2);//saida com 2 casas decimais
	cout << "media = " <<calcMedia(arvore, n) << endl;//saida para a media calculada na funcao

	tDestruir(arvore);//destroi arvore

	return 0;
}