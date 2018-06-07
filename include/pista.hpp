/**
* @author Gabriel Igor
* @file pista.hpp
* @since 03/06/18
* @date 07/06/18
* @brief Criação da classe Pista
*/
#ifndef PISTA_HPP
#define PISTA_HPP

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
using namespace std;
class Pista{
	private:
		string nome;
		int percurso;
	public:
		Pista();
		Pista(string nome, int percurso);
		~Pista();
		string getNome();
		int getPercurso();
		friend ostream& operator << (ostream &o, Pista &p);
};

#endif