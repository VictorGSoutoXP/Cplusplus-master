// Desafio: Faça um programa que verifica se uma palavra é palíndromo.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    int tam = palavra.length();
    bool palindromo = true;

    // Verificando se a palavra é palíndromo
    for (int i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - i - 1]) {
            palindromo = false;
            break;
        }
    }

    if (palindromo) {
        cout << "A palavra é palíndromo." << endl;
    } else {
        cout << "A palavra não é palíndromo." << endl;
    }

    return 0;
}
