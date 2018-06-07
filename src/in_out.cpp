/**
* @author Gabriel Igor
* @file in_out.cpp
* @since 03/06/18
* @date 07/06/18
* @brief Métodos de leitura e escrita de arquivos
*/
#include "../include/in_out.hpp"

void inSapos(vector<Sapo> &sapo){
	string line, nome;
	ifstream myfile("txts/sapos.txt");

	// Verificando se os arquivos podem ser abertos
	if(!myfile.is_open()){
		cout << "Deu ruim" << endl;
		return;
	}
	int jump, tests, wins, draws;
	//Atributos do sapo

	while(!myfile.eof()){
		//código
		myfile >> line;
		if(line == "") break;
		Sapo::codigo = stoi(line);
		//nome
		myfile >> line;
		if(line == "") break;
		nome = line;
		//pulos dados
		myfile >> line;
		if(line == "") break;
		jump = stoi(line);
		//provas disputadas
		myfile >> line;
		if(line == "") break;
		tests = stoi(line);
		//vitorias
		myfile >> line;
		if(line == "") break;
		wins = stoi(line);
		//empates
		myfile >> line;
		if(line == "") break;
		draws = stoi(line);

		Sapo staring(nome, jump, tests, wins, draws);
		sapo.push_back(staring);
	}
	myfile.close();

}

void inPistas(vector <Pista> &pistas){
	string line, nome;
	ifstream other("txts/pistas.txt");
	
	// Verificando se os arquivos podem ser abertos
	if(!other.is_open()){
		cout << "Deu ruim" << endl;
		return;
	}
	int tamanho;

	while(!other.eof()){
		other >> line;
		if(line == "") break;
		nome = line;

		other >> line;
		if(line == "") break;
		tamanho = stoi(line);
		
		Pista pista(nome, tamanho);
		pistas.push_back(pista);
	}
	other.close();
}

void writeSapos(vector<Sapo> &sapo){
	ofstream sfile("txts/sapos.txt");
	if(sfile.is_open()){
		for(int i=0; i<(int)sapo.size(); i++){
			sfile << sapo[i].getId() << "\n" 
				  << sapo[i].getNome() << "\n" 
				  << sapo[i].getTotal() << "\n"
				  << sapo[i].getProvas() << "\n" 
				  << sapo[i].getVitorias() << "\n";
			if(i == (int)sapo.size()-1){
				sfile << sapo[i].getEmpates();
			} else {
				sfile << sapo[i].getEmpates() << "\n";
			}
		}
		sfile.close();
	}
	else cout << "Deu ruim" << endl;
}
void writePistas(vector <Pista> &pistas){
	ofstream pfile("txts/pistas.txt");
	if(pfile.is_open()){
		for(int i=0; i<(int)pistas.size(); i++){
			pfile << pistas[i].getNome() << "\n";
			if(i == (int)pistas.size()-1){
				pfile << pistas[i].getPercurso();
			} else {
				pfile << pistas[i].getPercurso() << "\n";
			}
		}
		pfile.close();
	}
	else cout << "Deu ruim" << endl;
}
