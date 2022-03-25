#include <iostream>
using namespace std;

typedef struct No
{
	int info;
	struct No* ant;
	struct No* prox;
} Lista;

Lista* criar()//cria uma lista vazia
{
	return NULL;
}

bool estaVazia (Lista* L)//verificacao se a lista esta vazia
{
	return L == NULL;
}

Lista* inserirNoInicio(Lista* L, int valor)//inserir elemento no comeco
{
	Lista* novo = new Lista;
	novo->info = valor;
	novo->prox = L;

	return novo;
}

Lista* inserirNoFinal(Lista* L, int valor)//inserir elemento no final
{
	if (L == NULL)
	{
		return inserirNoInicio(L, valor);
	}

	else
	{
		Lista* ant = L;
		while (ant->prox != NULL)
		{
			ant = ant->prox;
		}

		Lista* novo = new Lista;
		novo->info = valor;
		novo->prox = NULL;
		ant->prox = novo;

		return L;
	}
}

bool estaPresente(Lista* L, int valor)//verifica se int procurado esta na lista
{
	Lista* inicio = L;
	Lista* aux = inicio;

	do
	{
		if(aux->info == valor)
			return true;
		aux = aux->prox;
	}
	while (aux != inicio);

	return false;
}

Lista* imprimirDoInicioAoFim(Lista* L)//Imprime a fila em ordem crescente
{
    Lista* inicio = L;
    Lista* aux = inicio;
	cout << "Sua fila em ordem crescente eh: ";
    do {
        cout << aux->info << ' ';
        aux = aux->prox;
    } while (aux != inicio);
    
    cout << endl;
	cout << string(80, '-') << endl;
}

void imprimirDoFimAoInicio(Lista* L)//Imprime a fila em ordem decrescente
{
	Lista* inicio = L;
	Lista* aux = inicio; 
	
	while (aux->prox != aux)
		aux = aux->prox;

	cout << "Sua lista em ordem decrescente eh: ";
	while (inicio != aux)
	{
		cout << aux->info << ' ';
		aux = aux->ant;
	}
	cout << endl;
	cout << string(80, '-') << endl;
}

Lista* remover(Lista* L, int valor)//remove o elemento desejado da lista
{
	if(L == NULL)
	{
		cout << "Nao ha elementos para ser removido\n";
		cout << string(80, '-') << endl;	  		   	
	}	
		
		
	else if(L->info == valor)
	{
		if(L->prox == L)
		{
			Lista *novoInicio = L->prox;

			delete L;

			if (novoInicio != NULL)
				novoInicio->ant = NULL;

		}

		else
		{
			Lista* aux = L;
			while (aux->prox != L)
				aux = aux->prox;

			aux->prox = L->prox;

			delete L;

			return aux->prox;
		}
	}

	else
	{
		Lista* inicio = L;
		Lista* atual = L;
		Lista* anterior = NULL;

		do
		{
			anterior = atual;
			atual = atual->prox;
		}
		while (atual != inicio && atual->info != valor);

		if (atual != inicio)
		{
			anterior->prox = atual->prox;

			delete atual;
		}

	}
	return L;
}

int main()
{
	Lista* L = criar();

	int v;//valor que sera inserido pelo usuario
	char opcao;//opcao que o usuario escolhera

	do
	{
		//casos que o usuario podera escolher
		cout << "(a) Inserir um elemento\n";
		cout << "(b) Esta vazia\n";
		cout << "(c) Esta presente\n";
		cout << "(d) Imprimir do inicio ao fim\n";
		cout << "(e) Imprimir do fim ao inicio\n";
		cout << "(f) Remover um elemento\n";
		cout << "(g) Sair\n";

		cout << "Escolha uma das opcoes anteriores para serem executadas: ";
		cin >> opcao;
		cin.ignore();
		cout << string(80, '-') << endl;

		switch (opcao)
		{
			case 'a':
			{
				cout << "Escolha um elemento para ser inserido na fila: ";
				cin >> v;
				L = inserirNoFinal(L, v);
				cout << string(80, '-') << endl;
			}
			break;
	
			case 'b':
			{
				if(estaVazia(L) == true)
					cout << "A Fila esta vazia!" << endl;
	
				else
					cout << "Ha elementos na fila" << endl;
	
				cout << string(80, '-') << endl;
			}
			break;
	
			case 'c':
			{
				cout << "Qual elemento deseja verificar ?: ";
				cin >> v;
				cout << endl;
	
				if(estaVazia(L) == true)
				{
					cout << "A Fila esta vazia!" << endl;
					cout << string(80, '-') << endl;
				}
	
				else if(estaPresente(L, v) == true)
				{
					cout << "O numero " << v << " esta presente!" << endl;
					cout << string(80, '-') << endl;
				}
	
				else
				{
					cout << "Elemento nao encontrado na lista" << endl;
					cout << string(80, '-') << endl;
				}
	
			}
			break;
	
			case 'd':
			{
				if(estaVazia(L) == true)
				{
					cout << "A Fila esta vazia!" << endl;
					cout << string(80, '-') << endl;
				}
	
				else
				{
			   	    imprimirDoInicioAoFim(L);
				}
			}
			break;
	
			case 'e':
			{
				if(estaVazia(L) == true)
				{
					cout << "A Fila esta vazia!" << endl;
					cout << string(80, '-') << endl;
				}
	
				else
				{
					imprimirDoFimAoInicio(L);
				}	
			}
			break;
		
			case 'f':
			{
				cout << "Escolha um valor para ser removido: ";
				cin >> v;
				remover(L, v);
			}
			break;
	
			case 'g':
			{
				cout << "Saiu!" << endl;
			}
			break;
	
			default:
			{
				cout << "opcao invalida, digite uma letra valida" << endl;
				cout << string(80, '-') << endl;
			}
			break;
		}	

	}
	while(opcao != 'g');

	return 0;
}
