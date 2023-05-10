// Verificação de número perfeito:

#include <iostream>

using namespace std;

int soma_divisores(int n) {
    int soma = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int n;
    cout << "Digite um número: ";
    cin >> n;
    if (soma_divisores(n) == n) {
        cout << "O número é perfeito!" << endl;
    } else {
        cout << "O número não é perfeito." << endl;
    }
    return 0;
}
