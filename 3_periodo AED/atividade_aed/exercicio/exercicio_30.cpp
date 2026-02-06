#include <iostream>
using namespace std;

class FilaCircular {
private:
    int frente, tras, capacidade;
    int* fila;

public:
    FilaCircular(int tamanho) {
        capacidade = tamanho;
        fila = new int[capacidade];
        frente = -1;
        tras = -1;
    }

    ~FilaCircular() {
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
    FilaCircular f(5);

    f.enqueue(10);
    f.enqueue(20);
    f.enqueue(30);

    cout << "Primeiro elemento da fila: " << f.front() << endl;

    f.dequeue();
    cout << "Primeiro elemento após dequeue: " << f.front() << endl;

    return 0;
}