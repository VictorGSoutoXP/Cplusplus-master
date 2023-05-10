// Números amigos:

#include <iostream>
#include <vector>

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
    int a, b;
    cout << "Digite dois números: ";
    cin >> a >> b;
    if (soma_divisores(a) == b && soma_divisores(b) == a) {
        cout << "Os números são amigos!" << endl;
    } else {
        cout << "Os números não são amigos." << endl;
    }
    return 0;
}
