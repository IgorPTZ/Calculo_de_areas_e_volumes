#pragma once
#ifndef TETRAEDRO_H
#define TETRAEDRO_H

#include "FormaTriDimensional.h"

class Tetraedro : public FormaTriDimensional
{
public:
	Tetraedro(const string &, double);

	void setValorAresta(double);
	double getValorAresta() const;

	virtual double obterArea() const;
	virtual double obterVolume() const;
	
private:
	double aresta;
};

#endif