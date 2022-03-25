#include <iostream>
#include <iomanip>
using namespace std;

struct aluno//struct para salvar as notas e a media do aluno
{
	int n1;
	int n2;
	int n3;
	int n4;
	float media;
};

int main()
{
	struct aluno *dados;//ponteiro do tipo struct aluno
		
	dados = new struct aluno;//aloca memoria para o aluno
	
	cin >> dados->n1 >> dados->n2 >> dados->n3 >> dados->n4;//entrada das 4 notas
	
	dados->media = (dados->n1 + dados->n2 + dados->n3 + dados->n4)/4.0;//calculo da media
	
	//saida da media das 4 notas com 2 casas decimais
	cout << fixed << setprecision(2);
	cout << dados->media << endl;
	
	delete(dados);
	
	return 0;
}