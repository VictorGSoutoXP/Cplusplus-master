// Soma de números de 1 a N:

#include <iostream>

using namespace std;

int main()
{
    int num, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        soma += i;
    }

    cout << "A soma dos numeros de 1 a " << num << " e: " << soma << endl;

    return 0;
}
