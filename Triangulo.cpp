#include "stdafx.h"
#include "Triangulo.h"

Triangulo::Triangulo(const string &nomeForma, double base, double altura)
	:FormaBiDimensional(nomeForma)
{
	setValorBase(base);
	setValorAltura(altura);
}

void Triangulo::setValorBase(double valorBase)
{
	base = (valorBase <= 0.0) ? 1.0 : valorBase;
}

double Triangulo::getValorBase() const
{
	return base;
}

void Triangulo::setValorAltura(double valorAltura)
{
	altura = (valorAltura <= 0.0) ? 1.0 : valorAltura;
}

double Triangulo::getValorAltura() const
{
	return altura;
}

double Triangulo::obterArea() const
{
	return (getValorBase() * getValorAltura() / 2);
}