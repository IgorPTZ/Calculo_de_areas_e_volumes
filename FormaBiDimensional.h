#pragma once
#ifndef FORMABIDIMENSONAL_H
#define FORMABIDIMENSONAL_H

#include "Formas.h"

class FormaBiDimensional : public Formas
{
public:
	FormaBiDimensional(const string &);
	
	virtual double obterArea() const = 0;
};

#endif