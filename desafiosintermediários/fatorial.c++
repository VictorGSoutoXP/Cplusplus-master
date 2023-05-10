// Fatoriall:

#include <iostream>

using namespace std;

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Digite um número: ";
    cin >> n;
    int resultado = fatorial(n);
    cout << "Fatorial de " << n << " = " << resultado << endl;
    return 0;
}
