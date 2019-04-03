#include "pch.h"
#include "PUDialog.h"
#include "Array.h"
#include "Heap.h"
#include "List.h"
#include <iostream>


PUDialog::PUDialog()
{

}


PUDialog::~PUDialog()
{
}

void PUDialog:: showMenu()
{
	


	std::cout << "Projekt SDiZO\nOpracowal student informatyki W4 Piotr Stachnio 241268\nkwiecien-marzec 2019 roku\n\n\n\n\n\n";
	std::cout << "Wybierz strukture danych ktora cie interesuje, poprzez wpisanie nr indeksu oraz nacisniecie klawisza ENTER\n";
	std::cout << "1)Tablica\n2)List dwu-kierunkowa\n3)Kopiec\n";

	std::cin >> chooser;

	Array* array = new Array();

	List* list = new List();

	Heap* heap = new Heap();

	
	switch (chooser)
	{
	case 1:
		std::cout << "Co chcesz zrobic na tablicy\n";
		
		arrayOptions(array);

		break;
	case 2:
		std::cout << "Co chcesz zrobic na liscie\n";

		
		
		break;
	case 3:
		std::cout << "Co chcesz zrobic na kopcu\n";

		

		break;
	default:
		std::cout << "Zle wybrana opcja\n";
		clearConsole();
		showMenu();

		break;
	}
}

void PUDialog:: clearConsole()
{
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void PUDialog::arrayOptions( Array *array)
{
	std::cout << "1) Wyswietl tablice\n2) Dodaj n elementow do tablicy\n3) Usun element z tablicy\n4) Sprawdz czy dany element znajduje sie w tablicy\n ";
	std::cin >> chooser;
	
	switch (chooser)
	{
	case 1:
		array->printArray();

		arrayOptions(array);

		break;
	case 2:
		std::cout << "Podaj ile elementow chcesz wpisac\n";
		std::cin >> chooser;
		
		std::cout << "Wpisz wartosci";
		
		for(int i = 0; i < chooser; i++)
		{
			std::cin >> helper;
			
			array->addHead(helper);
		}
		
		arrayOptions(array);

		break;
	default: 
		chooser = 0;
		break;
	}

	
}

void PUDialog::listOptions(List *list)
{
	std::cout << "";
}

void PUDialog::initializations()
{
	

	
}
