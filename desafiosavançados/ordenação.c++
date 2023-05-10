// Desafio: Implemente um algoritmo de ordenação em C++. O algoritmo deve receber um vetor de inteiros como entrada e ordená-lo em ordem crescente ou decrescente, dependendo da escolha do usuário. Algumas opções de algoritmos de ordenação são: Bubble Sort, Insertion Sort, Selection Sort, Merge Sort e Quick Sort.

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = v[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& v, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    merge_sort(v, left, mid);
    merge_sort(v, mid + 1, right);
    merge(v, left, mid, right);
}

int main() {
    int n, op;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    vector<int> v(n);
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "Escolha a ordem de ordenação (1 para crescente, 2 para decrescente): ";
    cin >> op;
    if (op == 1) {
        merge_sort(v, 0, n - 1);
    } else if (op == 2) {
        merge_sort(v, 0, n - 1);
        reverse(v.begin(), v.end());
    } else {
        cout << "Opção inválida!" << endl;
        return 0;
    }
    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
