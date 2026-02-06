#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Contato {
	char nome[51];
	char telefone[15];
};

int main()
{
	int s = 1;
	int i = 0;
    Contato contato[99];
    
	while (s == 1) {
		int opcao;
            
		cout << "1- Adicionar contato" << endl;
		cout << "2- Buscar contato" << endl;
		cin >> opcao;
		

		switch(opcao) {
		    case 1:
                
                cout << "Insira o nome do contato que deseja adicionar: " << endl;
                cin >> contato[i].nome;
                
                cout << "Insira o número do contato que deseja adicionar";
                cin >> contato[i].telefone;
                
                i++;
		        break;
                case 2:
		        char contnome[51];
		        
                cout << "Insira o nome do contato que deseja buscar: ";
                cin >> contnome;
                
                for (int cont = 0; cont < i; cont++){
                    if (strcmp(contnome, contato[cont].nome) == 0){
                        cout << "Nome: " << contato[cont].nome << endl;
                        cout << "Numero: " << contato[cont].telefone << endl;
                    }
                }
                break;
                default:
                return 0;
		}
	    cout << "Deseja utilizar o programa novamente?" << endl;
	    cout << "1 - Continuar" << endl;
	    cout << "2 - Encerrar" << endl;
	    cin >> s;
	}
	
	return 0;
}