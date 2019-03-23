#include "stdafx.h"
#include "Quadrado.h"

Quadrado::Quadrado(const string &nomeForma, double valorLado)
	:FormaBiDimensional(nomeForma)
{
	setValorDoLado(valorLado);
}

void Quadrado::setValorDoLado(double valorLado)
{
	valorDoLado = (valorLado <= 0.0) ? 1.0 : valorLado;
}

double Quadrado::getValorDoLado() const
{
	return valorDoLado;
}

double Quadrado::obterArea() const
{
	return (getValorDoLado() * getValorDoLado());
}

