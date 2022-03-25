#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
	int n; // numero de vertices
	int dist[3][3]; // matriz de distancia 
	n = 3;
	
	/*Gerando tabela aleatoria*/
	for(int i=0;i<n;i++)
	{
		for(int j=i; j<n; j++){
			if(i==j) 
				dist[i][j] = dist[j][i] = 0;
			else 
				dist[i][j] = dist[j][i] = rand()%10 + 1; //vou querer numeros de 1 a 9
		}
	}
	
	/*mostrando a matriz de adjacencia*/
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n; j++){
			cout <<dist[i][j] << " ";
		}
		cout << endl;
	}
	
	/*floyd warshall*/
	// Analiso se o caminho de i->k->j eh mais vantajoso, se for eu atualizo a distancia  
	for(int k = 0; k < n; k++)
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
	
	cout << dist[0][n-1] << endl; // mostra a distancia do 0 para o n-1
	
	return 0;
}






