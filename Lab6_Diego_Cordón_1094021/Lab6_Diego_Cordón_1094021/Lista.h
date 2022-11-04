#pragma once
#include "Pokémon.h"

using namespace System;
ref class Lista
{
	Poke^ Top;
	Poke^ Bottom;

public:
	
	int longitud;
	void InsertarDatos(String^ nombre, int numeroNacional, int generacion);
	bool Datos(String^ nombre, int numeroNacional, int generacion, int indice);
	String^ Nombre(int indice);
	int NumeroNacional(int indice);
	int Generacion(int indice);
	bool BorrarIndice(int indice);
	bool Ordenamiento();
	String^ Imprimir();
	int Buscar(int valor);
	bool Borrar(int valor);
	

};