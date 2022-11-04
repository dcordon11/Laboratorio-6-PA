#include "Lista.h"
#include "Pokémon.h"
#include "Orden.h"
using namespace System;

void Orden::Intercambios(Lista^ Lista, int i, int j)
{
	if (i != j)
	{
		String^ Nombre01 = Lista->Nombre(i);
		String^ Nombre02 = Lista->Nombre(j);

		int NumeroNacional01 = Lista->NumeroNacional(i);
		int NumeroNacional02 = Lista->NumeroNacional(j);

		int Generacion01 = Lista->Generacion(i);
		int Generacion02 = Lista->Generacion(j);

		Lista->BorrarIndice(i);
		Lista->Datos(Nombre02, NumeroNacional02, Generacion02, i);

		Lista->BorrarIndice(j);
		Lista->Datos(Nombre01, NumeroNacional01, Generacion01, j);

	}
}


void Orden::Intercambios2(Lista^ Lista)
{
	for (int i = 0; i < Lista->longitud; i++)
	{
		Random random;
		Intercambios(Lista, i, random.Next(0, Lista->longitud));
	}

}

int Orden::Pivote(Lista^ Lista, int l, int h)
{
	int pivote = Lista->NumeroNacional(h);
	int i = l - 1;

	for (int j = l; j < h; j++)
	{
		if (Lista->NumeroNacional(j) < pivote)
		{
			i++;
			Intercambios(Lista, i, j);
		}
	}

	Intercambios(Lista, i + 1, h);
	return i + 1;

}

void Orden::SelectionSort(Lista^ Lista)
{
	int i, indice;
	i = (Lista->longitud);

	while (i > 0)
	{
		indice = 0;
		for (int j = 0; j < i; j++)
		{
			if (Lista->NumeroNacional(j + 1) < Lista->NumeroNacional(j))
			{
				Intercambios(Lista, j, j + 1);
				indice = j;
			}
		} i = indice;
	}
}


void Orden::ShellSort(Lista^ Lista)
{
	while (!Lista->Ordenamiento())
	{
		Intercambios2(Lista);
	}

}


void Orden::QuickSort(Lista^ Lista, int l, int h)
{
	if (l < h)
	{
		int pivote = Pivote(Lista, l, h);
		QuickSort(Lista, l, pivote - 1);
		QuickSort(Lista, pivote + 1, h);
	}
}





