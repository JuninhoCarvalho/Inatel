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

//estrutura que insere os dados na arvore
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
	int n;//qtd de dados a serem inseridos
	int x;//dados a serem inseridos na arvore
	int p;//variavel a ser procurada na arvore
	
	cin >> n;//entrando com a quantidade
	
	//esturtura de repeticao para inserir os valores na arvore
	for(int i=0; i<n; i++)
	{
		cin >> x;//entrada dos valores
		
		tInsere(arvore,x);//inserindo o valor na arvore
	}	
	
	cin >> p;//valor que o usuario deseja verificar
	
	q = tPesq(arvore,p);//pesquisando se o valor esta na arvore
	
	//saida para pesquisa feita
	if(q != NULL)
		cout << "Encontrado" << endl;
	
	else
		cout << "Nao encontrado" << endl;

	return 0;
}