#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
    float v_altura[] = {1.82,1.74,1.90,1.65};
    int tam = sizeof(v_altura)/sizeof(v_altura[0]);

    for (int i=1; i<tam; i++)
    {
        float ref = v_altura[i];

        int j = i;
        while (j > 0 && v_altura[j-1] > ref)
        {
            v_altura[j] = v_altura[j-1];
            j--;
        }

        v_altura[j] = ref;
    }

	cout << "Altura ordenada crescente: ";
    for (int i=0; i<tam; i++)
        cout << fixed << setprecision(2) << v_altura[i] << "  ";
    cout << endl;

    return 0;
}
