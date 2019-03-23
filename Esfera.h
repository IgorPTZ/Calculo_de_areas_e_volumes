#pragma once
#ifndef ESFERA_H
#define ESFERA_H

#include "FormaTriDimensional.h"

class Esfera : public FormaTriDimensional
{
public:
	static const double PI;

	Esfera(const string &, double);

	void setValorRaio(double);
	double getValorRaio() const;

	virtual double obterArea() const;
	virtual double obterVolume() const;

private:
	double raio;
};

#endif