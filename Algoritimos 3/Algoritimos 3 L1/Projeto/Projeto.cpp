#include <iostream>
#include <math.h>
#include <climits>
#include <iomanip>
#include <stdlib.h>
using namespace std;

struct ponto {
float x;
float y;
} typedef ponto;

// Calcula distancia entre dois pontos
float distancia(float pontoAx, float pontoAy, float pontoBx, float pontoBy)
{
    return sqrt(pow((pontoBx - pontoAx), 2) + pow((pontoBy - pontoAy), 2));
}

float calculaCusto(int qtdePontosVisitados, int pontoAtual, float **matriz, int *pontosVisitados, int n, int *rotaAtual)
{
    float custoCalculado;
    int proximoPonto;
    float menorCusto = INT_MAX;
    
    // Faz uma copia do vetor de rota
    int *rota = (int *) calloc(n+1, sizeof(int));
    for (int i = 0; i < n+1; i++)
        rota[i] = rotaAtual[i];

    // Adiciona o ponto atual a rota
    rota[qtdePontosVisitados] = pontoAtual;

    // Marca o ponto atual como visitado
    qtdePontosVisitados++;
    pontosVisitados[pontoAtual] = 1;



    // Para cada ponto que ainda nao foi visitado
    for (int i = 1; i < n; i++)
    {    
        if (pontosVisitados[i] == 0)
        {
            // Visita o ponto 'i' que ainda nao foi visitado
            custoCalculado = calculaCusto(qtdePontosVisitados, i, matriz, pontosVisitados, n, rota);
            
            // Seleciona o ponto visitado que retornar o menor custo para ser o proximo ponto
            if (custoCalculado < menorCusto)
            {
                menorCusto = custoCalculado;
                proximoPonto = i;
                rota[qtdePontosVisitados] = proximoPonto;

                // Copia a rota calculada para a rota atual
                for (int j = 0; j < n+1; j++)
                    rotaAtual[j] = rota[j];
            }
        }
    } 

    // Chegou no ultimo ponto, retorna a distancia do ultimo ponto para o inicio (0.00, 0.00)
    if (qtdePontosVisitados == n)
    {  
        pontosVisitados[pontoAtual] = 0; // Desmarca o ponto atual como visitado
        return matriz[pontoAtual][0];
    }
    
    // Desmarca o ponto atual como visitado
    pontosVisitados[pontoAtual] = 0;
    
    free(rota);

    // Depois de encontrar o proximo ponto (o que tem o menor caminho ate o final), 
    // retorna a distancia do ponto atual ate o proximo ponto + a distancia do proximo ponto ate o final
    return menorCusto + matriz[pontoAtual][proximoPonto];

}

int main()
{
    int n;
    cin >> n;
    n += 1; // N pontos + o ponto (0,0)

    // Aloca memoria para o vetor de pontos
    ponto *pontos = (ponto *) calloc (n, sizeof(ponto));
    
    pontos[0].x = pontos[0].y = 0.0;
    // Leitura dos pontos
    for(int i=1; i<n; i++)
        cin >> pontos[i].x >> pontos[i].y;

    // Aloca memoria para matriz de distancias
    float **matriz = (float **) calloc(n, sizeof(float *));
    for (int i = 0; i < n; i++)
        matriz[i] = (float *) calloc(n, sizeof(float));

    // Gera matriz de distancias
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            matriz[i][j] = matriz[j][i] = distancia(pontos[i].x, pontos[i].y, pontos[j].x, pontos[j].y);

    // Aloca memoria para o vetor que indica se o ponto foi visitado
    int *pontosVisitados = (int *) calloc(n, sizeof(int));
    
    // Ponteiro que contera a rota de furacao
    int *rotaAtual = (int *) calloc (n+1, sizeof(int));

    int qtdePontosVisitados = 0;
    int pontoAtual = 0;

    float custo = calculaCusto(qtdePontosVisitados, pontoAtual, matriz, pontosVisitados, n, rotaAtual);

	//divisoria das entradas
	cout << "----------------------------------------------------" << endl;
	
    // Imprime o custo
    cout << fixed << setprecision(2);
    cout << custo << endl;

    // Imprime as coordenadas das rotas
    for(int i = 0; i < n+1; i++)
        cout << pontos[rotaAtual[i]].x << ' ' << pontos[rotaAtual[i]].y << endl;

    // Libera memoria
    delete(pontos);
    delete(pontosVisitados);
    delete(rotaAtual);

    for (int i = 0; i < n; i++)
        delete(matriz[i]);
    delete(matriz);

    return 0;
}
