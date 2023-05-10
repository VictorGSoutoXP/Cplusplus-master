// Fatorial de um número:

#include <iostream>

using namespace std;

int main()
{
    int num, fatorial = 1;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        fatorial *= i;
    }

    cout << "O fatorial de " << num << " e: " << fatorial << endl;

    return 0;
}
