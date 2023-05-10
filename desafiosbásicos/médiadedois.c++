// Média de dois números:

#include <iostream>

using namespace std;

int main()
{
    float num1, num2, media;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    media = (num1 + num2) / 2;

    cout << "A media dos numeros e: " << media << endl;

    return 0;
}
