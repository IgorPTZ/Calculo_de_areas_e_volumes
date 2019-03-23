#include "stdafx.h"
#include "Tetraedro.h"
#include <cmath>

Tetraedro::Tetraedro(const string &nomeForma, double aresta)
	:FormaTriDimensional(nomeForma)
{
	setValorAresta(aresta);
}

void Tetraedro::setValorAresta(double valorAresta)
{
	aresta = (valorAresta <= 0.0) ? 1.0 : valorAresta;
}

double Tetraedro::getValorAresta() const
{
	return aresta;
}

double Tetraedro::obterArea() const
{
	return ( pow(getValorAresta(),2) * sqrt(3)) ;
}

double Tetraedro::obterVolume() const
{
	return (pow(getValorAresta(),3) * sqrt(2) / 12);
}