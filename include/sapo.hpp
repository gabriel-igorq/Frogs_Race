/**
* @author Gabriel Igor
* @file sapo.hpp
* @brief Cria a classe Sapo para a corrida
* @since 03/06/18
* @date 07/06/18
*/
#ifndef SAPO_HPP
#define SAPO_HPP

#include <iostream>
#include <fstream>
#include <random>
#include <ostream>
#include <string>
using namespace std;
class Sapo{
	private:
		string nome;
		int id;
		int dist_percorrida;
		int qnt_pulosDados;
		int qnt_provasDisputadas;
		int vitorias;
		int empates;
		int qnt_totalDePulos;
		int rank;
	public:
		static std::random_device rd;
		static std::mt19937 gen;
		static std::uniform_int_distribution<> dis;
		Sapo();
		Sapo(string nome, int jumps, int tests, int wins, int draws);
		~Sapo();
		//getters para a escrita
		int getId();
		string getNome();
		int getTotal();
		int getProvas();
		int getVitorias();
		int getEmpates();
		int getDist();
		int getRank();
		void setRank(int rank);
		void setProvas(int provas);
		void zera();
		void pulo();
		void won();
		static int dtotal;
		static int codigo;
		friend ostream& operator << (ostream &o, Sapo &s);
};

#endif
