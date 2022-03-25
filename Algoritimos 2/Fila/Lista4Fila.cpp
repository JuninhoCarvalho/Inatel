#include <iostream>
#include <cstring>
using namespace std;

struct fila
{
    int fim; //guarda a posição do fim da fila
    int capacidade; //guarda a capacidade da fila
    float *dados; //vetor que armazena os valores
};

//funcao para criacao de um fila
void criar(fila *f, int c)
{
	f->fim = -1;
	f->capacidade = c;
	f->dados = new float[c];
}

//Verificacao se a fila esta vazia
bool isEmpty(fila *f)
{
	return (f->fim == -1);
}

//Verificacao se a fila esta cheia
bool isFull(fila *f)
{
	return (f->fim == f->capacidade-1);
}

//inserir um valor no inicio da fila
void insertFront(fila *f, float v)
{
	f->fim++;
	for(int i=f->fim; i>0; i--)
		f->dados[i] = f->dados[i-1];
	
	f->dados[0] = v;
}

//inserir um valor no final da fila
void insertRear(fila *f, float v)
{
	f->fim++;
	f->dados[f->fim] = v;
}

//desalocar o primeiro valor da fila
float deleteFront(fila *f)
{
	float aux = f->dados[0];
	for(int i=0; i < f->fim; i++)
		f->dados[i] = f->dados[i+1];
	
	f->fim--;
	
	return aux;
}

//desalocar o ultimo valor da fila
float deleteRear(fila *f)
{
	float aux = f->dados[f->fim];
	f->fim--;
	
	return aux;
}

//retornar o primeiro valor da fila
float getFront(fila *f)
{
	return (f->dados[0]);
}

//retornar o ultimo valor da fila
float getRear(fila *f)
{
	return (f->dados[f->fim]);
}

//imprimir a fila completa
void MostrarFila(fila *f)
{
	cout << "Sua fila esta composta pelos elementos: ";
	for(int i=0; i <= f->fim; i++)
	   	cout << f->dados[i] << " ";
	
	cout << endl;
	cout << string(80,'-') << endl;
}

int main()
{
	fila f;//struct fila
	int capacidade;//limite inicial da fila
	float v;//valor que sera inserido pelo usuario
	char opcao;//opcao que o usuario escolhera
	
	cout << "Insira a capacidade para sua fila: ";
	cin >> capacidade;
	
	criar(&f,capacidade);//funcao para criar a fila
	
	do{
		//casos que o usuario podera escolher
		cout << "(a) insertFront\n";
		cout << "(b) insertRear\n";
		cout << "(c) deleteFront\n";
		cout << "(d) deleteRear\n";
		cout << "(e) getFront\n";
		cout << "(f) getRear\n";
		cout << "(g) isEmpty\n";
		cout << "(h) isFull\n";
		cout << "(i) MostrarFila\n";
		cout << "(j) Sair\n";
		cout << "Escolha uma das opcoes anteriores para serem executadas: ";
		cin >> opcao;
		cin.ignore();
		cout << string(80,'-') << endl;
		
		switch (opcao)
        {
            case 'a':
			{
            	if(isFull(&f)==true)
				{
            		cout << "A fila esta cheia!" << endl;
            		cout << string(80,'-') << endl;
				}	
            	
            	else
				{
   					cout << "Insira um valor para ser alocado no inicio da fila: ";
					cin >> v;
            		insertFront(&f,v);
            		cout << string(80,'-') << endl;
				}
                break;
            
			}
            
            case 'b':
			{
            	if(isFull(&f)==true)
				{
            		cout << "A fila esta cheia!" << endl;
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
					cout << "Insira um valor para ser alocado no fim da fila: ";
					cin >> v;
            		insertRear(&f,v);
            		cout << string(80,'-') << endl;
				}
                break;
			}
			
            case 'c':
			{
            	if(isEmpty(&f)==true)
				{
            		cout << "Nao ha elemento para ser desalocado\n";
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
            		cout << "elemento do inicio desalocado: " << deleteFront(&f);
            		cout << endl;
					cout << string(80,'-') << endl;
				}
           	
                break;
			}
            
            case 'd':
			{
            	if(isEmpty(&f)==true)
				{
            		cout << "Nao ha elemento para ser desalocado\n";
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
            		cout << "elemento do fim desalocado: " << deleteRear(&f);
            		cout << endl;
					cout << string(80,'-') << endl;
				}
            	
                break;
			}
            
            
            case 'e':
			{
            	if(isEmpty(&f)==true)
				{
            		cout << "Nao ha elemento para ser mostrado\n";
					cout << string(80,'-') << endl;
				}
            	else
				{
					cout << "O primeiro elemento da fila eh: " << getFront(&f) << endl;
					cout << string(80,'-') << endl;
				}
				break;
			}
				
			case 'f':
			{
				if(isEmpty(&f)==true)
				{
            		cout << "Nao ha elemento para ser mostrado\n";
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
					cout << "O ultimo elemento da fila eh: " << getRear(&f) << endl;
					cout << string(80,'-') << endl;
				}
            	break;
			}
			
            case 'g':
			{
            	if(isEmpty(&f)==true)
				{
            		cout << "A fila esta vazia!" << endl;
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
					cout << "Ha elementos na fila" << endl;							
					cout << string(80,'-') << endl;
				}
				break;
			}

			case 'h':
			{
				if(isFull(&f)==true)
				{
            		cout << "A fila esta cheia!" << endl;
					cout << string(80,'-') << endl;
				}
            	
            	else
				{
					cout << "A fila ainda nao esta cheia" << endl;
					cout << string(80,'-') << endl;
				}
				
				break;
			}
			
			case 'i':
			{
				if(isEmpty(&f)==true)
				{
					cout << "Nao ha elementos para serem mostrados\n";
					cout << string(80,'-') << endl;
				}
					
				else
					MostrarFila(&f);
				
				break;
			}
			
			case 'j':
			{
				cout << "Saiu" << endl;
				
				break;
			}	
            default:
			{
                cout << "opcao invalida, digite uma letra valida" << endl;
				cout << string(80,'-') << endl;
				
                break;
			}
        }
        
	}while (opcao != 'j');
	
	return 0;
}
