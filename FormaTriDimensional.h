#pragma once
#ifndef FORMATRIDIMENSIONAL_H
#define FORMATRIDIMENSIONAL_H

#include "Formas.h"

class FormaTriDimensional : public Formas
{
public:
	FormaTriDimensional(const string &);

	virtual double obterArea() const = 0;
	virtual double obterVolume() const = 0;

private:
};

#endif