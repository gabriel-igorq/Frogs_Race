/**
* @author Gabriel Igor
* @file main.cpp
* @since 03/06/18
* @date 07/06/18
* @brief Arquivo principal da corrida
* @sa https://github.com/gabriel-igorq/Frogs_Race
*/
#include "../include/sapo.hpp"
#include "../include/pista.hpp"
#include "../include/in_out.hpp"

using namespace std;

int main(){

	//leitura dos sapos
	vector<Sapo> sapo;
	inSapos(sapo);

	//leitura das pistas
	vector<Pista> pistas;
	inPistas(pistas);

	string line, nome;
	int op;
	do{
		cout << "BEM VINDO À CORRIDA MALUCA\n";
		cout << "------------------------------\n";
		cout << "Escolha uma das opções abaixo: \n";
		cout << "0 - Sair" << endl;
		cout << "1 - Criar Sapo" << endl;
		cout << "2 - Ver estatísticas dos sapos" << endl;//OK
		cout << "3 - Criar uma Pista" << endl;
		cout << "4 - Ver estatísticas das pistas" << endl;//OK
		cout << "5 - Iniciar uma corrida" << endl;
		cout << "Qual ação deseja executar: ";
		cin >> op;
		switch(op){
			case 1:
			{
				string nome;
				cout << "------------------------------\n";
				cout << "Nome do sapo: ";
				cin >> nome;
				Sapo novo(nome, 0, 0, 0, 0);
				sapo.push_back(novo);
			}
			break;
			case 2:
			{
				if(sapo.size() == 0) cout << "Sem sapos" << endl;
				else{
					for(int i = 0; i < (int) sapo.size(); i++){
						cout << "--------------------------" << endl;
						cout << sapo[i];
						cout << "--------------------------" << endl;
					}
				}
				cout << endl;
			}
			break;
			case 3:
				{
				string nome;
				int percurso;
				cout << "------------------------------\n";
				cout << "Nome da pista: ";
				cin >> nome;
				cout << "Tamanho do percurso: ";
				cin >> percurso;
				Pista novo(nome, percurso);
				pistas.push_back(novo);
			}
			break;
			case 4:
			{
				if(pistas.size() == 0) cout << "Sem pistas" << endl;
				else{
					for(int i = 0; i < (int) pistas.size(); i++){
						cout << "------------------------------\n";
						cout << pistas[i];
						cout << "------------------------------\n";
					}
				}
				cout << endl;
			}
			break;
			case 5:
				if(sapo.size() == 0 || pistas.size() == 0) cout << "Pista interditada" << endl;
				else{
					//escolher pista
					string x, aux;
					cout << "Opções de pista: " << endl;
					for(int i=0; i<(int) pistas.size(); i++){
						cout << pistas[i].getNome() << " - " << pistas[i].getPercurso() << endl;
					}
					cout << "Resposta(Insira nome da pista): ";
					cin >> x;
					for(int i=0; i<(int) pistas.size(); i++){
						aux = pistas[i].getNome();
						if(x == aux){
							Sapo::dtotal = pistas[i].getPercurso();
							cout << endl;
						}
					}
					//mostrar sapos participantes
					cout << "Sapos que irão disputar a corrida: " << endl;
					for(int i=0; i<(int)sapo.size(); i++){
						sapo[i].setProvas(1);
						cout << "--------------------------" << endl;
						cout << sapo[i];
						cout << "--------------------------" << endl;
					}
					//iniciarCorrida(sapos);
					string a;
					cout << "Digite Enter para começar a corrida:" << endl;
					cin.ignore();
					getline(cin, a);
					cout << "E COMEEEEEEÇA A CORRIDA" << endl;
					int ranking = 0;
					while(ranking < (int) sapo.size()){
						for(int i = 0; i < (int) sapo.size(); i++){
							if(sapo[i].getRank() == 0){
								cout << "Distância anterior: " << sapo[i].getDist() << endl;
								sapo[i].pulo();
								cout << "--------------------" << endl;
								if(sapo[i].getDist() > Sapo::dtotal){
									ranking++;								
									sapo[i].setRank(ranking);
									if(ranking == 1){
										sapo[i].won();
									}
								}
							}
						}
					}
					cout << "--------------------------" << endl;
					cout << "RANK DA CORRIDA: " << endl;
					for(ranking=0; ranking<(int)sapo.size(); ranking++){
						for(int i=0; i<(int)sapo.size(); i++){
							if(sapo[i].getRank() == ranking+1){
								cout << ranking+1 << " - " << sapo[i].getNome() << endl;
							}					
						}
					}
					cout << "--------------------------" << endl;
					//resetar dados da corrida dos sapos
					for(int i=0; i<(int)sapo.size(); i++){
						sapo[i].zera();
					}
				}
			break;
		}
	}while(op!=0);

	writeSapos(sapo);
	writePistas(pistas);

	cout << "Até mais!!!" << endl;

	return 0;
}
