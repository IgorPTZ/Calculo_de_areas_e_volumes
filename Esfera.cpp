#include "stdafx.h"
#include "Esfera.h"

const double Esfera::PI = 3.14;

Esfera::Esfera(const string &nomeForma, double raio)
	:FormaTriDimensional(nomeForma)
{
	setValorRaio(raio);
}

void Esfera::setValorRaio(double valorRaio)
{
	raio = (valorRaio <= 0.0) ? 1.0 : valorRaio;
}

double Esfera::getValorRaio() const
{
	return raio;
}

double Esfera::obterArea() const
{
	return (4 * PI * (getValorRaio() * getValorRaio()));
}

double Esfera::obterVolume() const
{
	return (4 * PI * (getValorRaio() * getValorRaio() * getValorRaio()) / 3);
}