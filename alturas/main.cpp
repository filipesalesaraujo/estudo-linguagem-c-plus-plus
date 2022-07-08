//Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
//tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
//bem como os nomes dessas pessoas caso houver.

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, cont;
    double soma, media, percentual;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma = soma + alturas[i];
    }
    media = soma / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    cont = 0;
    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cont++;
        }
    }

    percentual = (double)cont * 100 / N;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;


    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
