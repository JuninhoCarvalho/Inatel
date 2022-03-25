#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct pessoa
{
    float peso; // peso em kg
    float altura; // altura em m
    float imc; // índice de massa corporal
};

int main()
{
	int n;//quantidade
	struct pessoa* dados;//ponteiro do tipo struct pessoa
		
	cin >> n;//entrada para qtd de dados de pessoas a serem inseridas	
		
	dados = new struct pessoa[n];//alocando memoria para o vetor de pessoas
	
	//entrada dos dados de cada pessoa
	for(int i=0; i<n; i++)
		cin >> dados[i].peso >> dados[i].altura;
	
	//calculo do imc de cada pessoa
	for(int i=0; i<n; i++)
		dados[i].imc = dados[i].peso/pow(dados[i].altura,2);
	
	//variaveis para comparacao do menor e maior recebem os dado da primeira pessoa
	float maior = dados[0].imc;
	float menor = dados[0].imc;
	
	//comparacao para maior e menor imc
	for(int i=0; i<n; i++)
	{
		if(dados[i].imc > maior)
			maior = dados[i].imc;
		
		if(dados[i].imc < menor)
			menor = dados[i].imc;
	}
	
	//saida do menor e maior IMC
	cout << fixed << setprecision(1);//1 casa decimal
	cout << "Menor IMC: " << menor << endl;
	cout << "Maior IMC: " << maior << endl;
	
	delete(dados);//desalocando memoria
	
	return 0;
}