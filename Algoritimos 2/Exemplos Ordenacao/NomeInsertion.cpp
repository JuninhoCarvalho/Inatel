#include <iostream>
#include <cstring>
using namespace std;

struct pessoa
{
	char nome[20];
};

int main()
{
	pessoa dados[10];
    int tam=4;
	char ref[14];
	
	for(int i=0; i<tam; i++)
		cin.getline(dados[i].nome,20);
	
    for (int i=1; i<tam; i++)
    {
        strcpy(ref,dados[i].nome);

        int j = i;
        while (j > 0 && (strcmp(dados[j-1].nome,ref)>0))
        {
            strcpy(dados[j].nome,dados[j-1].nome);
            j--;
        }

        strcpy(dados[j].nome,ref);
    }

	cout << "Altura ordenada crescente: ";
    for (int i=0; i<tam; i++)
        cout << dados[i].nome << "  ";
    cout << endl;

    return 0;
}
