// Calculadora simples:

#include <iostream>

using namespace std;

int main() {
    int x, y;
    char op;
    cout << "Digite a operação (ex: 2 + 3): ";
    cin >> x >> op >> y;
    if (op == '+') {
        cout << "Resultado: " << x + y << endl;
    } else if (op == '-') {
        cout << "Resultado: " << x - y << endl;
    } else if (op == '*') {
        cout << "Resultado: " << x * y << endl;
    } else if (op == '/') {
        cout << "Resultado: " << x / y << endl;
    } else {
        cout << "Operação inválida." << endl;
    }
    return 0;
}
