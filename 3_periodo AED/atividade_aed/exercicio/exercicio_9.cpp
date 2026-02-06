#include <iostream>
using namespace std;

struct Paciente{
    char nome[51];
    char diagnostico[101];
    int idade;
};

void exibirPacientes(Paciente* p, int n){
    for (int i = 0; i < n; i++){
        if (p[i].idade > 60){
            cout << "Nome do paciente: " << p[i].nome << endl;
            cout << "Diagnóstico: " << p[i].diagnostico << endl;
            cout << "Idade: " << p[i].idade << " anos" << endl;
            cout << "-------------------------" << endl;
        }   
    }
}

int main(){
    int n = 3;
    Paciente paciente[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Nome do paciente " << i + 1 << ": ";
        cin.getline(paciente[i].nome, 51);

        cout << "Idade do paciente " << i + 1 << ": ";
        cin >> paciente[i].idade;
        cin.ignore();

        cout << "Diagnóstico do paciente: ";
        cin.getline(paciente[i].diagnostico, 101);
    }
    
    exibirPacientes(paciente, n);
    
    return 0;
}
