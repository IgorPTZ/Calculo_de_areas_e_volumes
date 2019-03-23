#pragma once
#ifndef QUADRADO_H
#define QUADRADO_H

#include "FormaBiDimensional.h"

class Quadrado : public FormaBiDimensional
{
public:
	Quadrado(const string &, double);

	double getValorDoLado() const;

	virtual double obterArea() const;
	
private:
	double valorDoLado;

	void setValorDoLado(double);
};

#endif