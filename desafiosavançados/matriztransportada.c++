// Desafio: Faça um programa que leia uma matriz de tamanho NxM e gere a sua matriz transposta.

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Digite o tamanho da matriz (N x M): ";
    cin >> n >> m;

    int matriz[n][m], transposta[m][n];

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    // Gerando a matriz transposta
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Imprimindo a matriz transposta
    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
