// Maior de dois números:

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    if(num1 > num2)
    {
        cout << "O primeiro numero (" << num1 << ") e maior." << endl;
    }
    else if(num2 > num1)
    {
        cout << "O segundo numero (" << num2 << ") e maior." << endl;
    }
    else
    {
        cout << "Os dois numeros sao iguais." << endl;
    }

    return 0;
}
