//Fazer um programa para ler tr?s n?meros inteiros. Em seguida, mostrar qual o menor dentre os tr?s
//n?meros lidos. Em caso de empate, mostrar apenas uma vez.

#include <iostream>

using namespace std;

int main()
{

    int a, b, c, menor;

    cout << "Primeiro valor: ";
    cin >> a;

    cout << "Segundo valor: ";
    cin >> b;

    cout << "Terceiro valor: ";
    cin >> c;

    if ( a < b && a < c)
    {
        menor = a;

    }
    else if ( b < c)
    {
        menor = b;
    }

    else
    {
        menor = c;
    }

    cout << "MENOR = " << menor << endl;

    return 0;
}
