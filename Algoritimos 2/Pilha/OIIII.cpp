#include <iostream>
#include <stack>
using namespace std;

struct pilha
{
	int topo;
	int capacidade;
	float *elementos;
};

void init(pilha *p, int cap)
{
	p->topo = -1;
	p->capacidade = cap;
	p->elementos = new float[cap];
}

bool isFull(pilha *p)
{
	return(p->topo==p->capacidade-1);
}

bool isEmpty(pilha *p)
{
	return (p->topo==-1);
}

void push(pilha *p, float v)
{
	p->topo++;
	p->elementos[p->topo]=v;
}

float pop(pilha *p)
{
	float aux;
	
	aux= p->elementos[p->topo];
	p->topo--;
	
	return aux;
}

float top(pilha *p)
{
	float tope;
	
	tope=p->elementos[p->topo];
	
	return tope;	
}

int PH()
{
	pilha p;
	int cap;
	
	cout << "Insira uma capacidade para a pilha: ";
	cin >> cap;
	init(&p,cap);
	
    char opcao;
    do {
        cout << "a) Empilhar (push)" << endl;
        cout << "b) Desempilhar (pop)" << endl;
        cout << "c) Exibir topo (top)" << endl;
        cout << "d) Sair" << endl;
        cout << string(50,'-') << endl;
        cin >> opcao;
        switch (opcao)
        {
            // empilhar
            case 'a':
                if (isFull(&p) == true)
                {
                    cout << "pilha estah cheia; nao eh possivel inserir" << endl;
                }
                else
                {
                    float v;
                    cout << "entre com o valor a ser empilhado: ";
                    cin >> v;
                    push(&p, v);
                    cout << string(50,'-') << endl;
                    cout << "inseri o elemento " << v << endl;
                }
                break;

            // desempilhar
            case 'b':
                if (isEmpty(&p) == true)
                {
                    cout << "pilha estah vazia; nao eh possivel remover" << endl;
                }
                else
                {
                    float tchau = pop(&p);
                    cout << string(50,'-') << endl;
                    cout << "removi o elemento " << tchau << endl;
                }
                break;

            // topo
            case 'c':
                if (isEmpty(&p) == true)
                {
                    cout << "pilha estah vazia; nao ha topo a ser exibido" << endl;
                }
                else
                {
                	cout << string(50,'-') << endl;
                    cout << "o topo da pilha eh " << top(&p) << endl;
                }
                break;

            // sair
            case 'd':
                cout << "tchau!" << endl;
                break;

            // invalido
            default:
                cout << "opcao invalida; digite a, b, c ou d" << endl;
                break;
        }
    } while (opcao != 'd');
	
	return 0;
}

int main()
{
	int principal;
	
	cout << "Deseja criar uma nova pilha? " << endl;
	cout << "Se sim digite (1), se nao digite (2)" << endl;
	
	do
	{
		cin >> principal;
	}while(principal!=1 && principal!=2);
	
	if(principal==1)
		PH();
	
	else
		cout << "Vaza fio" << endl;
	
	
	return 0;
}