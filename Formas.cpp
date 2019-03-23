#include "stdafx.h"
#include <iostream>
using std::cout;

#include "Formas.h"

Formas::Formas(const string &nomeForma)
	:nome(nomeForma)
{

}

string Formas::getNome() const
{
	return nome;
}
