#include "stdafx.h"
#include "Cubo.h"

Cubo::Cubo(const string &nomeForma, double aresta)
	:FormaTriDimensional(nomeForma)
{
	setValorAresta(aresta);
}

void Cubo::setValorAresta(double valorAresta)
{
	aresta = (valorAresta <= 0.0) ? 1.0 : valorAresta;
}

double Cubo::getValorAresta() const
{
	return aresta;
}

double Cubo::obterArea() const
{
	return (6 * (getValorAresta() * getValorAresta()));
}

double Cubo::obterVolume() const
{
	return (getValorAresta() * getValorAresta() * getValorAresta());
}