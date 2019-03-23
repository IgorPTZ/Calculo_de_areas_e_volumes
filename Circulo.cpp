#include "stdafx.h"
#include "Circulo.h"

const double Circulo::PI = 3.14;

Circulo::Circulo(const string &nomeForma, double raio)
	:FormaBiDimensional(nomeForma)
{
	setValorRaio(raio);
}

void Circulo::setValorRaio(double valorRaio)
{
	raio = (valorRaio <= 0.0) ? 1.0 : valorRaio;
}

double Circulo::getValorRaio() const
{
	return raio;
}

double Circulo::obterArea() const
{
	return (PI * (getValorRaio() * getValorRaio()));
}