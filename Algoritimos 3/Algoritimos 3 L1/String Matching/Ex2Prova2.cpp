#include <iostream>
#include <cstring>
using namespace std;

struct infos
{
	int contador;
	int ep;
};

void calcula_LPS(int lps[], char P[], int tamP)
{
	// tamanho do maior prefixo que tambem eh sufixo anterior
    int tam = 0;
    
	lps[0] = 0; // caso base
	
    // o loop calcula lps[i] para i = 1 ate tamP-1 
    int i = 1; 
    while (i < tamP)
	{ 
        if (P[i] == P[tam]) // se encontrar uma letra que bate tanto como prefixo quanto como sufixo
		{
            tam++; // aumento o tamanho do maior prefixo que tambem eh sufixo
            lps[i] = tam; // salvo o valor para esse prefixo
            i++; // vou para o proximo prefixo
        } 
        else // (p[i] != p[tam]) se encontrar uma letra que nao bate como prefixo e sufixo
        {
            if (tam != 0) // se o tamanho do maior prefixo que tambem eh sufixo atual for diferente de 0
			{
                tam = lps[tam - 1]; // volto pro maior prefixo que tambem eh sufixo considerando o prefixo anterior
                // Note que neste caso nao incrementamos o 'i'
			}
            else // se o tamanho do maior prefixo que tambem eh sufixo atual for 0
            { 
                lps[i] = 0; // o maior prefixo que tambem é prefixo agora vale 0
                i++; // vou para o proximo prefixo
            } 
        } 
    }			
}

bool kmp(char T[], char P[],int tamT, int tamP)
{
	int lps[tamP]; // vetor que indica para onde voltarei no padrao quando ocorrer um mismatch
				   // lps -> indica o tamanho do maior sufixo de p[0...i] que tambem eh prefixo de p[0...i] (exceto a string inteira)
	
	calcula_LPS(lps, P, tamP);
	
    int j = 0; // j eh tamanho do meu match atual, ONDE EU ESTOU NO MEU PADRAO
    int i = 0; // posicao no texto
    
    while(i < tamT)
	{
        if(T[i] == P[j]) // match
		{
			j++;
			i++;
			if(j == tamP) // encontrei o padrao no texto na posicao (i-tamP) até i
			{
				return true;
			   	j = lps[j-1];
			}
		}
		
		else // mismatch
		{
			if(j != 0) // se ocorreu mismatch depois de j matchs
				j = lps[j-1];
			else // mismatch na comparacao da primeira letra
				i++;
		}	
    }
    //chegou no final do texto e nao econtrou padrao
    return false;
}

int main(){
//    KMP ENCONTRA PADRÃO NO TEXTO
//    MAIOR PREFIXO QUE BATE COM O SUFIXO , QUE NAO SAO DO MSM TAMANHO

	int n;
	char T[30];
    
	cin >> n;
	cin.ignore();
	
	//o Padrao do exercicio é mar, entao considere char P[] = "mar"
	
	for(int i=1; i<=n; i++)
	{
	   	cin.getline(T,100);
	   	
	   	if(kmp(T, "mar",strlen(T),3))
	   		cout << "Pule o episodio " << i << endl;
	}
	    
    return 0;
}