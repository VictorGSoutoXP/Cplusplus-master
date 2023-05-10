// Verificação de número primo:

#include <iostream>

using namespace std;

int main()
{
    int num, divisores = 0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            divisores++;
        }
    }

    if(divisores == 2)
    {
        cout << num << " e um numero primo." << endl;
    }
    else
    {
        cout << num << " nao e um numero primo." << endl;
    }

    return 0;
}
