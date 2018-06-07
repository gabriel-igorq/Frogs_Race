/**
* @author Gabriel Igor
* @file pista.cpp
* @since 03/06/18
* @date 07/06/18
* @brief Métodos da classe Pista
*/
#include "../include/pista.hpp"

Pista::Pista(string nome, int percurso){
	this->nome = nome;
	this->percurso = percurso;
}

Pista::Pista(){}

Pista::~Pista(){}

ostream& operator<<(ostream &o, Pista &p){
	o << "Nome: " << p.nome << endl;
	o << "Tamanho do percurso: " << p.percurso << endl;
	return o;
}

string Pista::getNome(){
	return this->nome;
}

int Pista::getPercurso(){
	return this->percurso;
}