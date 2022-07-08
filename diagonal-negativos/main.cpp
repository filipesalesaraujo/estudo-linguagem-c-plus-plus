//Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
//contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
//negativos da matriz.

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, cont;

    cout << "QUal a ordem da matriz? ";
    cin >> N;

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << mat[i][i] << " ";
    }
    cout << endl;

    cont = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                cont++;
            }
        }
    }

    cout << "QUANTIDADE DE NEGATIOS = " << cont << endl;

    return 0;
}
