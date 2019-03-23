#pragma once
#ifndef CIRCULO_H
#define CIRCULO_H

#include "FormaBiDimensional.h"

class Circulo : public FormaBiDimensional
{
public:
	static const double PI;

	Circulo(const string &, double);

	void setValorRaio(double);
	double getValorRaio() const;

	virtual double obterArea() const;

private:
	double raio;
};

#endif