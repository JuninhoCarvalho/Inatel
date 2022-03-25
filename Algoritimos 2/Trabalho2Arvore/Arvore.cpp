#include <iostream>
#include <cstring>

#define VAZIO NULL

using namespace std;

typedef struct No
{
    int altura;
    char conteudo[20];
    struct No* esq;
    struct No* dir;
} Arvore;

Arvore* criar(char entrada[20], Arvore* esq, Arvore* dir)//criacao da arvore
{
    Arvore* arv = new Arvore;
    strcpy(arv->conteudo, entrada);
    arv->esq = esq;
    arv->dir = dir;
    return arv;
}

bool estaVazia(Arvore* arv)//verificacao se esta vazia
{
	return (arv == VAZIO);
}

Arvore* destruir(Arvore* arv)//Reset
{
	if (arv != VAZIO)
	{
		destruir(arv->esq);
		destruir(arv->dir);
		delete arv;
	}
	return VAZIO;
}

Arvore* buscar(Arvore* arv, char entrada[20])//Verificar se o elemento desejado esta presente
{
    if (arv == VAZIO)
    {
        cout << "no vazio" << endl;
        return VAZIO;
    }
    else if (strcmp(entrada,arv->conteudo)<0)
    {
        return buscar(arv->esq, entrada);
    }
    else if (strcmp(entrada,arv->conteudo)>0)
    {
        return buscar(arv->dir, entrada);
    }
    else
    {
        cout << "achei! " << arv->conteudo << endl;
        return arv;
    }
}

Arvore* inserir(Arvore* arv, char entrada[20]) //Insercao de um elemento na arvore
{
	if (arv == VAZIO)
		arv = criar(entrada, VAZIO, VAZIO);
	
	else if (strcmp(entrada, arv->conteudo) < 0)
		arv->esq = inserir(arv->esq, entrada);
	
	else
		arv->dir = inserir(arv->dir, entrada);
	
	return arv;
}

Arvore* remover(Arvore* arv, char entrada[20])//Remocao do elemento desejado
{
    // arvore vazia
    if (arv == VAZIO)
    {
        cout << "no vazio" << endl;
        return VAZIO;
    }
    // valor a ser removido eh menor que o do no atual
    // ou seja, esta localizado na subarvore da esquerda
    else if (strcmp(entrada,arv->conteudo)<0)
    {
        arv->esq = remover(arv->esq, entrada);
    }
    // valor a ser removido eh maior que o do no atual
    // ou seja, esta localizado na subarvore da direita
    else if (strcmp(entrada,arv->conteudo)>0)
    {
        arv->dir = remover(arv->dir, entrada);
    }
    // encontrou o no a remover
    else
    {
        // caso 1: no sem filhos
        if (arv->esq == VAZIO && arv->dir == VAZIO)
        {
            delete arv;
            arv = VAZIO;
        }
        // caso 2: no so tem um filho
        // caso 2.1: so tem o filho da direita
        else if (arv->esq == VAZIO)
        {
            Arvore* aux = arv;
            arv = arv->dir;
            delete aux;
        }
        // caso 2.2: so tem o filho da esquerda
        else if (arv->dir == VAZIO)
        {
			Arvore* aux = arv;
            arv = arv->esq;
            delete aux;
        }
        // caso 3: no tem dois filhos
        else
		{
			Arvore* aux = arv->esq;
			while (aux->dir != VAZIO)
				aux = aux->dir;
			strcpy(arv->conteudo, aux->conteudo); // troca os valores
			strcpy(aux->conteudo, entrada);
			arv->esq = remover(arv->esq, entrada);
		}
    }
    return arv;
}

void preOrdem(Arvore* arv)//Impressao em pre ordem : RED
{
    if (arv == VAZIO)
        return;
   
	else
	{
	    for(int i=0; i<strlen(arv->conteudo); i++)
	    	cout << arv->conteudo[i];
		cout << endl;
		
	    preOrdem(arv->esq);
	    preOrdem(arv->dir);
	}   
}

void emOrdem(Arvore* arv)//Impressao em Ordem: ERD
{
    if (arv == VAZIO)
        return;
    else
	{
	    emOrdem(arv->esq);
	    for(int i=0; i<strlen(arv->conteudo); i++)
	    	cout << arv->conteudo[i];
		cout << endl;
	    emOrdem(arv->dir);
	}
}

void posOrdem(Arvore* arv)//Impressao em pos Ordem: EDR
{
    if (arv == VAZIO)
        return;
    
    else
	{
	    posOrdem(arv->esq);
	    posOrdem(arv->dir);
	    for(int i=0; i<strlen(arv->conteudo); i++)
	    	cout << arv->conteudo[i];
		cout << endl;
	}
}

int Altura(Arvore *arv) // Funcao que ira descobrir a altura da arvore
{
	int d = 0;
	while (arv != NULL)
	{
		d++;
		arv = arv->esq;
	}
	return d;
}

bool Auxiliar(Arvore* arv, int d, int nivel = 0) //parte da funcao ehCompletaCheia
{
	if (arv == NULL)
		return true;
	
	if (arv->esq == NULL && arv->dir == NULL)
		return (d == nivel + 1);

	if (arv->esq == NULL || arv->dir == NULL)
		return false;

	return Auxiliar(arv->esq, d, nivel + 1) && Auxiliar(arv->dir, d, nivel + 1);
}

// 3 verificacoes de tipos de arvores desejado
bool ehCompletaCheia(Arvore *arv)//1
{
	int d = Altura(arv);
	return Auxiliar(arv, d);
}

bool ehQuaseCompleta(Arvore *arv)//2
{
	int d = Altura(arv);
	return !(Auxiliar(arv, d));
}

int ContarNos(Arvore* arv)//Conta a qtd de nos na arvore
{
	if (arv == NULL)
		return (0);
	
	return (1 + ContarNos(arv->esq) + ContarNos(arv->dir));
}

bool ehEstritamenteBinaria(Arvore* arv, int aux, int qtdElementos)//3
{
	if (arv == NULL)
		return (true);

	if (aux >= qtdElementos)
		return (false);

	return (ehEstritamenteBinaria(arv->esq, 2 * aux + 1, qtdElementos) && ehEstritamenteBinaria(arv->dir, 2 * aux + 2, qtdElementos));
}

int main()
{
    Arvore* arv = VAZIO;
    char entrada[20];
    criar(entrada, VAZIO, VAZIO);
    int c;
    int b;
    char opcao;
    
    do{
    	cout << "(a) Buscar uma entrada\n";
		cout << "(b) Inserir\n";
		cout << "(c) Remover\n";
		cout << "(d) Esta Vazia\n";
		cout << "(e) Eh estritamente binaria ?\n";
		cout << "(f) Eh Quase completa ? \n";
		cout << "(g) Eh Completa cheia ?\n";
		cout << "(h) Imprimir em Pre Ordem\n";
		cout << "(i) Imprimir em Ordem\n";
		cout << "(j) Imprimir Em Pos Ordem\n";
		cout << "(k) Sair\n";
		cout << "Escolha uma das opcoes anteriores para serem executadas: ";
		cin >> opcao;
		cin.ignore();
		cout << string(80,'-') << endl;
    	
	    switch(opcao)
		{
			case 'a':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Esta vazia!" << endl;
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Qual palavra deseja encontrar ?: ";
					cin.getline(entrada,20);
					buscar(arv, entrada);
					cout << string(80,'-') << endl;
				}
				break;
			}
			
			case 'b':
			{
				cout << "Digite uma palavra: ";
				cin.getline(entrada,20);
				arv = inserir(arv, entrada);
				cout << string(80,'-') << endl;
				break;
			}
				
			case 'c':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Nao ha elementos para remover!" << endl;
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Digite qual palavra deseja remover: ";
					cin.getline(entrada,20);
					remover(arv, entrada);
					cout << string(80,'-') << endl;
				}
				
				break;
			}
			
			case 'd':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Esta vazia!" << endl;
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Ha elementos na Arvore!" << endl;
					cout << string(80,'-') << endl;
				}
				break;
			}	
			
			case 'e':
			{
				c=ContarNos(arv);
				b=0;
				
				if(ehEstritamenteBinaria(arv,b,c))
				{
					cout << "Eh estritamente binaria!\n";
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Nao eh estritamente binaria!\n";
				   	cout << string(80,'-') << endl;
				}
				break;	
			}
			
			case 'f':
			{
				if(ehQuaseCompleta(arv))
				{
					cout << "Eh quase completa!\n";
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Nao eh quase completa!\n";
					cout << string(80,'-') << endl;							
				}
				break;
			}
			
			case 'g':
			{
				if(ehCompletaCheia(arv))
				{
					cout << "Eh Completa cheia!\n";
					cout << string(80,'-') << endl;
				}
				
				else
				{
					cout << "Nao eh completa cheia!\n";
					cout << string(80,'-') << endl;
				}
				break;
			}	
			
			case 'h':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Nao ha elementos para mostrar!" << endl;
					cout << string(80,'-') << endl;
				}
			
				else
				{
					preOrdem(arv);
					cout << string(80,'-') << endl;
				}
				break;
			}
			
			case 'i':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Nao ha elementos para mostrar!" << endl;
					cout << string(80,'-') << endl;
				}
				
				else
				{
					emOrdem(arv);
					cout << string(80,'-') << endl;
					
				}
				break;
			}
			
			case 'j':
			{
				if(estaVazia(arv)==true)
				{
					cout << "Nao ha elementos para mostrar!" << endl;
					cout << string(80,'-') << endl;
				}
				
				else
				{
					posOrdem(arv);
					cout << string(80,'-') << endl;
				}
				break;
			}
			
			case 'k':
			{
				cout << "Saiu!\n";
				cout << string(80,'-') << endl;
				break;
			}
			
			default:
			{
				cout << "Insira uma entrada valida, por favor!" << endl;
				cout << string(80,'-') << endl;
				break;
			}
			
        }		   	
	}while(opcao!='k');
	
    destruir(arv);
    
    return 0;
}