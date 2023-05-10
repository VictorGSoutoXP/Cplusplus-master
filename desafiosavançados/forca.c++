// Desafio: Faça um programa que implemente o jogo da forca. O programa deve ler uma palavra secreta e, em seguida, permitir que o usuário tente adivinhar a palavra, letra por letra. O usuário tem um número limitado de tentativas antes de ser enforcado.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string palavra_secreta;
    cout << "Digite a palavra secreta: ";
    cin >> palavra_secreta;

    vector<char> letras_acertadas(palavra_secreta.length(), '_');
    int tentativas = 0;

    while (tentativas < 6) {
        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;

        bool acertou = false;

        for (int i = 0; i < palavra_secreta.length(); i++) {
            if (palavra_secreta[i] == letra) {
                letras_acertadas[i] = letra;
                acertou = true;
            }
        }

        if (acertou) {
            cout << "Você acertou uma letra!" << endl;
        } else {
            tentativas++;
            cout << "Você errou! Tentativas restantes: " << 6 - tentativas << endl;
        }

        cout << "Palavra: ";
        for (int i = 0; i < letras_acertadas.size(); i++) {
            cout << letras_acertadas[i] << " ";
        }
        cout << endl;

        if (palavra_secreta == string(letras_acertadas.begin(), letras_acertadas.end())) {
            cout << "Parabéns, você ganhou!" << endl;
            break;
        }
    }

    if (tentativas == 6) {
        cout << "Que pena, você perdeu!" << endl;
    }

    return 0;
}

