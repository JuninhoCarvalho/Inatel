#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void rabin_karp(char T[], char P[], int tamT, int tamP, int d, int q, int caso)
{
	int cont_ocorrencias = 0;
	int ultima_ocorrencia;
	int h; // valor utilizado para calculo de hash
	int p = 0; // padrao convertido para inteiro
	int t = 0; // texto convertido para inteiro

	for(int i = 0; i < tamP; i++)
	{
		p = (d * p + (P[i]-'0')) % q; // converte o padrao
		t = (d * t + (T[i]-'0')) % q; // converte o texto para o primeiro valor (t0)
	}
	
	h = (int)pow(d, tamP - 1) % q; // utilizado para calculo de hash
	
	for(int i = 0; i <= tamT - tamP; i++)
	{
		if(p == t) // Se encontrei um valor de hash valido
		{
			// Verifico se ha diferencas
			int j;
			for(j = 0; j < tamP; j++)
			{
				if(P[j] != T[i + j])
				{
					break;
				}
			}

			if(j == tamP)
			{
				cont_ocorrencias++;
				ultima_ocorrencia=i;
			}	
				
		}

		if(i < tamT - tamP) // se ainda nao cheguei no final
		{
			t = (d * ( t - (T[i]-'0') * h ) + (T[i + tamP]-'0')) % q; // atualizo o ti para ti+1
			if(t < 0) t += q;
		}
	}
	cout << "Caso #" << caso << ":" << endl;
	if(cont_ocorrencias == 0)
		cout << "Nao existe subsequencia" << endl;
	
	else
	{
		cout << "Qtd.Subsequencias: " << cont_ocorrencias << endl;
		cout << "Pos: "<< ultima_ocorrencia+1 << endl;
	}
	cout << endl;
	
}

int main()
{
	char texto[100];
	char padrao[100];
	int caso=0;

	while(cin >> padrao){
		cin >> texto;
		caso++;
		rabin_karp(texto, padrao, strlen(texto), strlen(padrao), 10, 13,caso);
	
	}

	return 0;
}