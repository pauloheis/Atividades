#include <iostream>
#include <stack>
using namespace std;

class Fila {
private:
    int frente, tras, capacidade;
    int* fila;

public:
    Fila(int tamanho) {
        capacidade = tamanho;
        fila = new int[capacidade];
        frente = -1;
        tras = -1;
    }

    ~Fila() {
        delete[] fila;
    }

    bool isEmpty() {
        return frente == -1;
    }

    bool isFull() {
        return tras == capacidade - 1;
    }

    void enqueue(int valor) {
        if (isFull()) {
            cout << "Fila cheia! Não é possível adicionar o valor." << endl;
            return;
        }
        if (frente == -1) {
            frente = 0;
        }
        fila[++tras] = valor;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Fila vazia! Não há elementos para remover." << endl;
            return;
        }
        for (int i = 0; i < tras; i++) {
            fila[i] = fila[i + 1];
        }
        tras--;
        if (tras == -1) {
            frente = -1;
        }
    }

    int front() {
        if (isEmpty()) {
            cout << "Fila vazia!" << endl;
            return -1;
        }
        return fila[frente];
    }

    void inverterFila() {
        stack<int> pilha;
        while (!isEmpty()) {
            pilha.push(front());
            dequeue();
        }
        while (!pilha.empty()) {
            enqueue(pilha.top());
            pilha.pop();
        }
    }
};

int main() {
    Fila f(5);

    f.enqueue(10);
    f.enqueue(20);
    f.enqueue(30);
    f.enqueue(40);

    cout << "Fila original:" << endl;
    while (!f.isEmpty()) {
        cout << f.front() << " ";
        f.dequeue();
    }
    cout << endl;

    f.enqueue(10);
    f.enqueue(20);
    f.enqueue(30);
    f.enqueue(40);

    f.inverterFila();

    cout << "Fila invertida:" << endl;
    while (!f.isEmpty()) {
        cout << f.front() << " ";
        f.dequeue();
    }
    cout << endl;

    return 0;
}