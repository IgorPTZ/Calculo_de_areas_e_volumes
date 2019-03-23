#pragma once
#ifndef FORMAS_H
#define FORMAS_H

#include <string>
using std::string;

#include <iostream>
using std::cout;

class Formas
{
public:
	Formas(const string &);
	string getNome() const;
	virtual double obterArea() const = 0;

private:
	string nome;
};

#endif