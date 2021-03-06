#include "stdafx.h"

#include <typeinfo>

#include <iostream>
using std::fixed;

#include <vector>
using std::vector;

#include <iomanip>
using std::setprecision;

#include "Formas.h"

#include "FormaBiDimensional.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

#include "FormaTriDimensional.h"
#include "Esfera.h"
#include "Cubo.h"
#include "Tetraedro.h"


void exibirFormasBiDimensional(const FormaBiDimensional * const);
void exibirFormasTriDimensional(const FormaTriDimensional * const);

int main()
{
	vector <Formas *> formas(6);
	FormaBiDimensional * formaBiDimensionalPtr = 0;
	FormaTriDimensional * formaTriDimensionalPtr = 0;

	formas[0] = new Quadrado("Qadrado", 4.0);
	formas[1] = new Triangulo("Triangulo", 2.0, 4.0);
	formas[2] = new Circulo("Circulo", 4.0);
	formas[3] = new Esfera("Esfera", 8.0);
	formas[4] = new Cubo("Cubo", 8.0);
	formas[5] = new Tetraedro("Tetraedro", 8.0);

	for (size_t i = 0; i < formas.size(); i++)
	{
		if (formaBiDimensionalPtr = dynamic_cast <FormaBiDimensional *>(formas[i])) {
			exibirFormasBiDimensional(formaBiDimensionalPtr);
		}
		else if (formaTriDimensionalPtr = dynamic_cast <FormaTriDimensional *>(formas[i])) {
			exibirFormasTriDimensional(formaTriDimensionalPtr);
		}
	}


    return 0;
}

void exibirFormasBiDimensional(const FormaBiDimensional * const ponteiroBase)
{
	cout << fixed << setprecision(2);
	cout << "\nClasse na hierarquia: " << typeid(*ponteiroBase).name() << '\n'
         << "Nome da forma: "          << ponteiroBase->getNome()      << '\n'
         << "Area: "                   << ponteiroBase->obterArea()    << '\n';
}

void exibirFormasTriDimensional(const FormaTriDimensional * const ponteiroBase)
{
	cout << fixed << setprecision(2);
	cout << "\nClasse na hierarquia: " << typeid(*ponteiroBase).name() << '\n'
		 << "Nome da forma: "          << ponteiroBase->getNome()      << '\n'
		 << "Area: "                   << ponteiroBase->obterArea()    << '\n'
		 << "Volume:"                  << ponteiroBase->obterVolume()  << '\n';
}

