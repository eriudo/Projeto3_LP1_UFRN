#ifndef CORRIDA_HPP
#define CORRIDA_HPP

#include "sapo.hpp"
#include "circuito.hpp"

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
*@file corrida.hpp
*@brief Arquivo corrida que determina as classes para a corrida.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

/*@brief Ĺink para o github onde este arquivo está disponibilizado: https://github.com/eriudo/Projeto3_LP1_UFRN*/

using namespace std;

class Corrida //classe corrida que define todos os atributos necessarios para efetuar uma corrida, no caso precisamos de uma pista, um sapo, das distancias e do ranking
{
protected:
	vector <Sapo*> lagoa;  //criando uma  lista de sapos, para que a corrida possa ter multiplos
	vector <Circuito*> temporada; //criando uma lista de pistas, para que a corrida possa ter multiplas
public:

	Corrida();
	~Corrida();

	void add_sapo(Sapo *novo);
	void add_circuito (Circuito *nova);
	void add_arqsapo(Sapo *novo);
	void add_arqcircuito (Circuito *nova);
	void dados_sapo();
	void dados_circuito();
	void run();
	int getDistancia();
	void printRank();
};

#endif