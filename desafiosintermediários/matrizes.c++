// Soma de matrizes:

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int linhas, colunas;
    cout << "Digite o número de linhas: ";
    cin >> linhas;
    cout << "Digite o número de colunas: ";
    cin >> colunas;
    vector<vector<int>> matriz1(linhas, vector<int>(colunas));
    vector<vector<int>> matriz2(linhas, vector<int>(colunas));
    vector<vector<int>> resultado(linhas, vector<int>(colunas));
    cout << "Digite os elementos da matriz 1: " << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz1[i][j];
        }
    }
    cout << "Digite os elementos da matriz 2: " << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz2[i][j];
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << "Resultado: " << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
