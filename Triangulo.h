#pragma once
#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FormaBiDimensional.h"

class Triangulo : public FormaBiDimensional
{
public:
	Triangulo(const string &, double, double);

	void setValorBase(double);
	double getValorBase() const;

	void setValorAltura(double);
	double getValorAltura() const;

	virtual double obterArea() const;

private:
	double base;
	double altura;
};

#endif