// Números primos:

#include <iostream>

using namespace std;

bool eh_primo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Digite um número: ";
    cin >> n;
    if (eh_primo(n)) {
        cout << "O número é primo!" << endl;
    } else {
        cout << "O número não é primo." << endl;
    }
    return 0;
}
