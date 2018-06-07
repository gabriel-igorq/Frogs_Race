/**
* @author Gabriel Igor
* @file sapo.cpp
* @since 03/06/18
* @date 07/06/18
* @brief Métodos da classe sapo
*/

#include "../include/sapo.hpp"
#include <random>
#include <ostream>
using namespace std;

std::random_device Sapo::rd{};
std::mt19937 Sapo::gen(Sapo::rd());
std::uniform_int_distribution<> Sapo::dis(1,6);

int Sapo::dtotal;
int Sapo::codigo;

Sapo::Sapo(string nome, int jumps, int tests, int wins, int draws){
	this->nome = nome;
	this->id = codigo++;
	this->dist_percorrida = 0;
	this->qnt_pulosDados = 0;
	this->qnt_provasDisputadas = tests;
	this->vitorias = wins;
	this->empates = draws;
	this->qnt_totalDePulos = jumps;
	this->rank = 0;
}

Sapo::Sapo(){}

Sapo::~Sapo(){}

void Sapo::pulo(){
	this->qnt_pulosDados++;
	this->qnt_totalDePulos++;
	int pulo = std::round(dis(gen));
	this->dist_percorrida += pulo;
	cout << "Nome: " << this->nome << endl;
	cout << "Id: " << this->id << endl;
	cout << "Pulo: " << pulo << endl;
	cout << "Posição atual: " << this->dist_percorrida << endl;
}

int Sapo::getId(){
	return this->id;
}
string Sapo::getNome(){
	return this->nome;
}

int Sapo::getTotal(){
	return this->qnt_totalDePulos;
}
int Sapo::getProvas(){
	return this->qnt_provasDisputadas;
}
int Sapo::getVitorias(){
	return this->vitorias;
}
int Sapo::getEmpates(){
	return this->empates;
}

int Sapo::getDist(){
	return this->dist_percorrida;
}

int Sapo::getRank(){
	return this->rank;
}

void Sapo::setRank(int rank){
	this->rank = rank;
}

void Sapo::setProvas(int provas){
	this->qnt_provasDisputadas = this->qnt_provasDisputadas+provas;
}

void Sapo::zera(){
	this->dist_percorrida = 0;
	this->qnt_pulosDados = 0;
	this->rank = 0;
}

void Sapo::won(){
	this->vitorias++;
}


ostream& operator<<(ostream &o, Sapo &s){
	o << "Nome: " << s.nome << endl;
	o << "Identificador: " << s.id << endl;
	o << "Quantidade de provas disputadas: " << s.qnt_provasDisputadas << endl;
	o << "Vitórias: " << s.vitorias << endl;
	o << "Empates: " << s.empates << endl;
	o << "Quantidade total de pulos: " << s.qnt_totalDePulos << endl;
	return o;
}
