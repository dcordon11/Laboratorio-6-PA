#pragma once
#include "Lista.h"

ref class Orden
{
public:

	void Intercambios(Lista^ Lista, int i, int j);
	void Intercambios2(Lista^ Lista);
	int  Pivote(Lista^ Lista, int l, int h);

	void SelectionSort(Lista^ Lista);
	void ShellSort(Lista^ Lista);
	void QuickSort(Lista^ Lista, int l, int h);


};

