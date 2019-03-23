#pragma once
#ifndef CUBO_H
#define CUBO_H

#include "FormaTriDimensional.h"

class Cubo : public FormaTriDimensional
{
public:
	Cubo(const string &, double);

	void setValorAresta(double);
	double getValorAresta() const;

	virtual double obterArea() const;
	virtual double obterVolume() const;

private:
	double aresta;
};

#endif