// Busca binária:

#include <iostream>
#include <vector>

using namespace std;

int busca_binaria(vector<int> v, int n) {
    int esq = 0;
    int dir = v.size() - 1;
    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (v[meio] == n) {
            return meio;
        } else if (v[meio] < n) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    vector<int> v(n);
    cout << "Digite os " << n << " elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x;
    cout << "Digite o elemento a ser buscado: ";
    cin >> x;
    int pos = busca_binaria(v, x);
    if (pos != -1) {
        cout << "Elemento encontrado na posição " << pos << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }
    return 0;
}

