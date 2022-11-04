#pragma once
#include "NuevoNodoHeader.h"

using namespace System;

ref class Poke
{
public:
	
	String^ Nombre;
	int NumeroNacional, Generacion;
	Poke^ Siguiente;

};