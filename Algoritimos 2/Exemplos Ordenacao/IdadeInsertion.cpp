#include <iostream>
using namespace std;

int main()
{
   
    int v_idade[] = {33,27,22,29};
    int tam = sizeof(v_idade)/sizeof(v_idade[0]);

    for (int i=1; i<tam; i++)
    {
        int ref = v_idade[i];

        int j = i;
        while (j > 0 && v_idade[j-1] > ref)
        {
            v_idade[j] = v_idade[j-1];
            j--;
        }

        v_idade[j] = ref;
    }

	cout << "Idade Ordenada Crescente: ";
    for (int i=0; i<tam; i++)
        cout << v_idade[i] << " ";
    cout << endl;

    return 0;
}
