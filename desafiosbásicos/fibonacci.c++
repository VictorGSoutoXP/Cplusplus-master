// Sequência de Fibonacci:

#include <iostream>

using namespace std;

int main()
{
    int num, num1 = 0, num2 = 1, proximo;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Sequencia de Fibonacci: " << num1 << " " << num2 << " ";

    for(int i = 3; i <= num; i++)
    {
        proximo = num1 + num2;
        cout << proximo << " ";
        num1 = num2;
        num2 = proximo;
    }

    cout << endl;

    return 0;
}
