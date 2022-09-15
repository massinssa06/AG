#pragma once
#ifndef _MYALGO_OPT_
#define _MYALGO_OPT_
#include "OptUHA.h"
#include "objective_func.h"

class myAlgorithm : OptUHA
{
protected:
	 // déclarer les paramètres de votre algorithme ici
	 
	vector<solution> population;


protected: 
	void UpdatePoulation(int func_num, int idx, solution new_sol);
	indvidual FindBestSolution(int func_num, double &fitness);
	void evaluate_pop(int func_num);
	double evaluate_individual(int func_num, solution ind);
	void update_fitness(int idx, double fitness_val);
public:
	double solve(int func_num);
	myAlgorithm( );  // mettre un constructeur avec des paramètres ici
	~myAlgorithm();
	
	// Ajouter d'autres fonctions liées à votre algorithme ici
};

#endif
