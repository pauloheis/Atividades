#include <iostream>
using namespace std;

struct Retangulo{
    float base;
    float altura;
};

void Area(Retangulo r){
    cout << "Area do retangulo: " << r.base * r.altura << endl;
}

void Perimetro(Retangulo r){
    cout << "Perimetro do retangulo: " << 2* (r.base + r.altura) << endl;
    
}

int main(){
    Retangulo retangulo;

    cout << "Insira as dimensões do retangulo." << endl << "Base: ";
    cin >> retangulo.base;

    cout << "Altura: ";
    cin >> retangulo.altura;

    Area(retangulo);
    Perimetro(retangulo);

    return 0;
}