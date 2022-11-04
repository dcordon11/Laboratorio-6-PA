#include "Lista.h"
#include "Pokémon.h"
using namespace System;

void Lista::InsertarDatos(String^ nombre, int numeroNacional, int generacion)
{
	Poke^ New = gcnew Poke();
	New->Nombre = nombre;
	New->NumeroNacional = numeroNacional;
	New->Generacion = generacion;
	New->Siguiente = Top;

	Top = New;

	if (Bottom == nullptr)
	{
		Bottom = New;
	}
	longitud++;

}

bool Lista::Datos(String^ nombre, int numeroNacional, int generacion, int indice)
{
	if (Top == nullptr || indice  == 0)
	{
		InsertarDatos(nombre, numeroNacional, generacion);
		return true;

	}

	int i = 0;
	Poke^ Actual = Top;
	while (i < (indice - 1) && Actual != nullptr)
	{
		Actual = Actual->Siguiente;
		i++;
	}
	if (Actual == nullptr)
	{
		return false;
	}

	Poke^ New = gcnew Poke();
	New->Nombre = nombre;
	New->NumeroNacional = numeroNacional;
	New->Generacion = generacion;

	New->Siguiente = Actual->Siguiente;
	Actual->Siguiente = New;
	longitud++;

}

String^ Lista::Nombre(int indice)
{
	Poke^ Actual = Top;
	int ValorDevolver = 0;
	while (Actual != nullptr && ValorDevolver < indice)
	{
		Actual = Actual->Siguiente;
		ValorDevolver++;
	} return Actual->Nombre;
}

int Lista::NumeroNacional(int indice)
{
	Poke^ Actual = Top;
	int ValorDevolver = 0;
	while (Actual != nullptr && ValorDevolver < indice)
	{
		Actual = Actual->Siguiente;
		ValorDevolver++;
	} return Actual->NumeroNacional;
}

int Lista::Generacion(int indice)
{
	Poke^ Actual = Top;
	int ValorDevolver = 0;
	while (Actual != nullptr && ValorDevolver < indice)
	{
		Actual = Actual->Siguiente;
		ValorDevolver++;
	} return Actual->Generacion;
}



bool Lista::BorrarIndice(int indice)
{
	if (indice == 0)
	{
		Poke^ Borrar = Top;
		Top = Top->Siguiente;
		delete Borrar;
	}
	else
	{
		Poke^ Anterior = Top;
		int i = 0;
		while (i < (indice - 1))
		{
			Anterior = Anterior->Siguiente;
			i++;

		}

		Poke^ Borrar = Anterior->Siguiente;
		Anterior->Siguiente = Borrar->Siguiente;
		delete Borrar;
	}

	longitud--;
	return true;
}

bool Lista::Ordenamiento()
{
	bool Orden = true;
	Poke^ Actual = Top;

	while (Actual != nullptr && Actual->Siguiente != nullptr)
	{
		if (Actual->NumeroNacional >= Actual->Siguiente->NumeroNacional)
		{
			Orden = false;
		}
		Actual = Actual->Siguiente;
	} return Orden;
}


String^ Lista::Imprimir()
{
	String^ valor = nullptr;
	Poke^ Actual;
	Actual = Top;

	while (Actual != nullptr)
	{
		valor += Actual->Nombre + "\t" + Actual->NumeroNacional.ToString() + "\t" + Actual->Generacion.ToString() + "\n";
		Actual = Actual->Siguiente;
	}
	return valor;
}

int Lista::Buscar(int numero)
{
	int indice = 0;
	Poke^ Actual = Top;
	while (Actual->NumeroNacional != numero && Actual != nullptr)
	{
		Actual = Actual->Siguiente;
		indice++;
	}

	if (Actual == nullptr)
	{
		return -1;
	}
	else
	{
		return indice;
	}
}

bool Lista::Borrar(int valor)
{
	int indice = Buscar(valor);
	if (indice == -1)
	{
		return false;
	}

	return BorrarIndice(indice);
}




