// Cálculo de PI:

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Digite o número de termos: ";
    cin >> n;
    double pi = 0;
    for (int i = 0; i < n; i++) {
        int sinal = pow(-1, i);
        double termo = 4.0 / (2*i + 1);
        pi += sinal * termo;
    }
    cout << "Valor de PI: " << pi << endl;
    return 0;
}
