#include <iostream>
using namespace std;

class FilaAtendimento {
private:
    int frente, tras, capacidade;
    int* fila;

public:
    FilaAtendimento(int tamanho) {
        capacidade = tamanho;
        fila = new int[capacidade];
        frente = -1;
        tras = -1;
    }

    ~FilaAtendimento() {
        delete[] fila;
    }

    bool isEmpty() {
        return frente == -1;
    }

    bool isFull() {
        return (tras + 1) % capacidade == frente;
    }

    void enqueue(int valor) {
        if (isFull()) {
            cout << "Fila cheia! Não é possível adicionar o valor." << endl;
            return;
        }
        if (frente == -1) {
            frente = 0;
        }
        tras = (tras + 1) % capacidade;
        fila[tras] = valor;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Fila vazia! Não há elementos para remover." << endl;
            return;
        }
        if (frente == tras) {
            frente = tras = -1;
        } else {
            frente = (frente + 1) % capacidade;
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "Fila vazia!" << endl;
            return -1;
        }
        return fila[frente];
    }
};

int main() {
    FilaAtendimento f(5);
    int opcao;
    int cliente;

    while (true) {
        cout << "Menu de Atendimento Bancario:" << endl;
        cout << "1 - Adicionar cliente na fila" << endl;
        cout << "2 - Atender cliente" << endl;
        cout << "3 - Verificar primeiro cliente" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha a opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o numero do cliente: ";
                cin >> cliente;
                f.enqueue(cliente);
                break;
            case 2:
                f.dequeue();
                break;
            case 3:
                cout << "Cliente sendo atendido: " << f.front() << endl;
                break;
            case 4:
                return 0;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }

    return 0;
}