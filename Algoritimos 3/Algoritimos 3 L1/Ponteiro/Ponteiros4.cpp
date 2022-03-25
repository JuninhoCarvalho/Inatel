#include <iostream>
using namespace std;

struct aluno//struct dos dados dos alunos
{
	int mat;
	int nota;
	char curso;
};

int main()
{
	struct aluno* dados;//ponteiro do tipo struct aluno
	int i=0;//contador
	int c=0;//contador para qtd de novos alunos
	
	dados = new struct aluno[100];//alocando memoria para o vetor de alunos matriculados
	
	//entrada de dados para matricula !=0
	do
	{
		cin >> dados[i].mat;
		cin >> dados[i].nota;
		cin >> dados[i].curso;
		
		i++;
		c++;
	}while(dados[i-1].mat!=0);
	
	int maior_nota = dados[0].nota;//maior nota recebe o primeiro valor para proximas comparacoes
	int matricula_do_maior;//recebera a matricula do aluno de maior nota
	char curso_do_maior;//curso do aluno de maior nota
	
	//estrutura de repeticao para achar a maior nota
	for(i=1; i<c; i++)
	{
		if(dados[i].nota > maior_nota)
		{
			maior_nota = dados[i].nota;
			matricula_do_maior = dados[i].mat;
			curso_do_maior = dados[i].curso;
		}
	}
	
	//saida de dados
	cout << matricula_do_maior << " " << maior_nota << " " << curso_do_maior;
	cout << endl;
	
	//desocupando a memoria alocada
	delete(dados);
	   	
	return 0;
}