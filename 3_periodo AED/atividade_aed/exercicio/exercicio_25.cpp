#include <iostream>
using namespace std;

class Pilha {
private:
    int topo;
    int capacidade;
    int* pilha;

public:
    Pilha(int tamanho) {
        capacidade = tamanho;
        topo = -1;
        pilha = new int[capacidade];
    }

    ~Pilha() {
        delete[] pilha;
    }

    bool isEmpty() {
        return topo == -1;
    }

    bool isFull() {
        return topo == capacidade - 1;
    }

    void push(int valor) {
        if (isFull()) {
            cout << "Pilha cheia! Não é possível adicionar o valor." << endl;
            return;
        }
        pilha[++topo] = valor;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Pilha vazia! Não há elementos para remover." << endl;
            return;
        }
        topo--;
    }

    int top() {
        if (!isEmpty()) {
            return pilha[topo];
        }
        cout << "Pilha vazia!" << endl;
        return -1;
    }
};

int main() {
    Pilha p(5);

    p.push(10);
    p.push(20);
    p.push(30);

    cout << "Topo da pilha: " << p.top() << endl;

    p.pop();
    cout << "Topo da pilha após pop: " << p.top() << endl;

    return 0;
}