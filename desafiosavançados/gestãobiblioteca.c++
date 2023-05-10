// Desafio: Faça um sistema de gestão de biblioteca em C++. O programa deve permitir que o usuário cadastre novos livros, pesquise livros pelo título ou autor, empreste livros para usuários cadastrados, devolva livros emprestados e liste todos os livros cadastrados. Além disso, o programa deve armazenar as informações dos livros em um arquivo externo, para que possam ser persistidas entre execuções do programa.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Livro {
public:
    string titulo;
    string autor;
    string editora;
    int ano;
    bool emprestado;

    Livro(string t, string a, string e, int an) {
        titulo = t;
        autor = a;
        editora = e;
        ano = an;
        emprestado = false;
    }

    friend ostream& operator<<(ostream& os, const Livro& livro) {
        os << livro.titulo << " - " << livro.autor << " - " << livro.editora << " - " << livro.ano;
        if (livro.emprestado)
            os << " - emprestado";
        return os;
    }
};
class Biblioteca {
private:
    vector<Livro> livros;
    string arquivo = "livros.txt";

public:
    void cadastrarLivro() {
        string titulo, autor, editora;
        int ano;
        cout << "Digite o título do livro: ";
        getline(cin, titulo);
        cout << "Digite o autor do livro: ";
        getline(cin, autor);
        cout << "Digite a editora do livro: ";
        getline(cin, editora);
        cout << "Digite o ano de publicação do livro: ";
        cin >> ano;
        cin.ignore();
        Livro livro(titulo, autor, editora, ano);
        livros.push_back(livro);
        cout << "Livro cadastrado com sucesso!" << endl;
        salvarLivros();
    }

    void listarLivros() {
        if (livros.empty()) {
            cout << "Não há livros cadastrados!" << endl;
            return;
        }
        cout << "Lista de livros cadastrados:" << endl;
        for (auto livro : livros)
            cout << livro << endl;
    }

    void pesquisarLivros() {
        string termo;
        cout << "Digite o termo de pesquisa: ";
        getline(cin, termo);
        vector<Livro> resultados;
        for (auto livro : livros) {
            if (livro.titulo.find(termo) != string::npos || livro.autor.find(termo) != string::npos)
                resultados.push_back(livro);
        }
        if (resultados.empty()) {
            cout << "Nenhum livro encontrado!" << endl;
            return;
        }
        cout << "Resultado da pesquisa:" << endl;
        for (auto livro : resultados)
            cout << livro << endl;
    }

    void emprestarLivro() {
        string titulo;
        cout << "Digite o título do livro a ser emprestado: ";
        getline(cin, titulo);
        for (auto& livro : livros) {
            if (livro.titulo == titulo) {
                if (livro.emprestado) {
                    cout << "Livro já está emprestado!" << endl;
                    return;
                } else {
                    livro.emprestado = true;
                    cout << "Livro emprestado com sucesso!" << endl;
                    salvarLivros();
                    return;
                }
            }
        }
        cout << "Livro não encontrado!" << endl;
    }

    void devolverLivro() {
        string titulo;
        cout << "Digite o título do livro a ser devolvido: ";
        getline(cin, titulo);
        for (auto& livro : livros) {
            if (livro.titulo == titulo) {
                if (!livro.emprestado) {
                    cout << "Livro não está emprestado!" << endl;
                    return;
                } else {
                    livro.emprestado = false;
                    cout << "Livro devolvido com sucesso!" << endl;
                    salvarLivros();
                    return;
                }
            }
        }
        cout << "Livro não encontrado!" << endl;
    }

    void carregarLivros() {
        ifstream arqLivros(arquivo);
        if (!arqLivros.is_open()) {
            cout << "Erro ao abrir arquivo!" << endl;
            return;
        }
        string linha;
        while (getline(arqLivros, linha)) {
            string titulo, autor, editora;
            int ano;
            bool emprestado;
                        istringstream iss(linha);
            getline(iss, titulo, ';');
            getline(iss, autor, ';');
            getline(iss, editora, ';');
            iss >> ano;
            iss.ignore();
            iss >> emprestado;
            Livro livro(titulo, autor, editora, ano, emprestado);
            livros.push_back(livro);
        }
        arqLivros.close();
        cout << "Livros carregados com sucesso!" << endl;
    }

    void salvarLivros() {
        ofstream arqLivros(arquivo);
        if (!arqLivros.is_open()) {
            cout << "Erro ao abrir arquivo!" << endl;
            return;
        }
        for (auto livro : livros)
            arqLivros << livro << endl;
        arqLivros.close();
    }

    void menu() {
        int opcao;
        do {
            cout << "----- Biblioteca -----" << endl;
            cout << "1 - Cadastrar livro" << endl;
            cout << "2 - Listar livros" << endl;
            cout << "3 - Pesquisar livros" << endl;
            cout << "4 - Emprestar livro" << endl;
            cout << "5 - Devolver livro" << endl;
            cout << "6 - Sair" << endl;
            cout << "Escolha uma opção: ";
            cin >> opcao;
            cin.ignore();
            switch (opcao) {
                case 1:
                    cadastrarLivro();
                    break;
                case 2:
                    listarLivros();
                    break;
                case 3:
                    pesquisarLivros();
                    break;
                case 4:
                    emprestarLivro();
                    break;
                case 5:
                    devolverLivro();
                    break;
                case 6:
                    cout << "Encerrando o programa..." << endl;
                    break;
                default:
                    cout << "Opção inválida!" << endl;
            }
        } while (opcao != 6);
    }
};

int main() {
    Biblioteca biblioteca;
    biblioteca.carregarLivros();
    biblioteca.menu();
    return 0;
}
