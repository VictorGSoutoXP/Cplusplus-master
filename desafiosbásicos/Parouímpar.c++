// Par ou ímpar:

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << num << " e par." << endl;
    }
    else
    {
        cout << num << " e impar." << endl;
    }

    return 0;
}
