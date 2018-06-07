/**
* @author Gabriel Igor
* @file in_out.hpp
* @since 03/06/18
* @date 07/06/18
* @brief Criação de métodos para ler e escrever arquivos das classes Pista e Sapo
*/
#ifndef IN_OUT_HPP
#define IN_OUT_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include "../include/sapo.hpp"
#include "../include/pista.hpp"
using namespace std;

void inSapos(vector<Sapo> &sapo);
void inPistas(vector <Pista> &pistas);
void writeSapos(vector<Sapo> &sapo);
void writePistas(vector <Pista> &pistas);

#endif
	