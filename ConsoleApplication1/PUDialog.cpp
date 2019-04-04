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
		
		system("CLS");
		std::cout << "Co chcesz zrobic na tablicy\n";
		arrayOptions(array);

		break;
	case 2:
		std::cout << "Co chcesz zrobic na liscie\n";

		system("CLS");
		
		
		break;
	case 3:
		std::cout << "Co chcesz zrobic na kopcu\n";

		system("CLS");
		
		

		break;
	default:
		system("CLS");
		
		showMenu();
		
		std::cout << "Zle wybrana opcja\n";
		break;
	}
}


void PUDialog::arrayOptions( Array *array)
{
	std::cout << "1)Wyswietl tablice\n2)Dodaj element/y do tablicy\n3)Usun element z tablicy\n4)Powrot do poprzedniego menu\n";
	std::cin >> chooser;
	
	switch (chooser)
	{
	case 1:
		system("CLS");
		
		array->printArray();

		arrayOptions(array);

		break;
	case 2:
		
		system("CLS");
		
		PUDialog::arrayAddingOptions(array);

		break;
	case 3:
		
		system("CLS");
		if(array->size != 0)
		{
			arrayRemovingOptions(array);
		}
		else
		{
			std::cout << "Tablica jest pusta, nie ma czego usuwac!\n";
			arrayOptions(array);
		}
		break;
	case 4:
		system("CLS");


		showMenu();
	default: 
		
		system("CLS");
		
		std::cout << "BLAD!\nZle wybrany nr indeksu.";
		
		arrayOptions(array);
		
		break;
	}

	
}

void PUDialog::listOptions(List *list)
{
	std::cout << "1)Wyswietl liste\n2)Dodaj element do list\n3)Usun element z listy\n";

}

void PUDialog::arrayAddingOptions(Array* array)
{
	std::cout << "1)Dodaj na poczatek\n2)Dodaj na koniec\n3)Dodaj na konkretna pozycje\n";
	
	std::cin >> chooser;
	
	
	switch(chooser)
	{
	case 1:
		std::cout << "Podaj ile elementow chcesz wpisac\n";
		std::cin >> chooser;

		std::cout << "Wpisz wartosci\n";

		for (int i = 0; i < chooser; i++)
		{
			std::cin >> helper;

			array->addHead(helper);
		}
		system("CLS");
		arrayOptions(array);
		break;
	case 2:
		std::cout << "Podaj ile elementow chcesz wpisac\n";
		std::cin >> chooser;

		std::cout << "Wpisz wartosci\n";

		for (int i = 0; i < chooser; i++)
		{
			std::cin >> helper;

			array->addTail(helper);
		}
		system("CLS");
		arrayOptions(array);
		break;
	case 3:
		std::cout << "Wpisz wartosc, a nastepnie pozycje na ktora chcesz dodac\n";
		std::cin >> chooser;
		std::cin >> helper;

		array->addInTheMidle(chooser,helper);
		
		system("CLS");
		
		arrayOptions(array);
		break;
	
	}
}

void PUDialog::arrayRemovingOptions(Array* array)
{
	std::cout << "Wybierz opcje usuwania:\n1)Usun pierwszy element\n2)Usun ostatni element\n3)Usun element o wybranym indeksie\n4)Powroc do poprzedniego menu\n";
	std::cin >> chooser;

	switch(chooser)
	{
	case 1:
		system("CLS");
		
		array->removeHead();
		
		arrayOptions(array);
		break;
	case 2:
		system("CLS");
		
		array->removeLast();
		
		arrayOptions(array);
		break;
	case 3:
		std::cout << "Wprowadz pozycje ktore chcesz usunac(indeksowanie pozycji zaczyna sie od 0)\n";
		std::cin >> chooser;

		array->removeFromMiddle(chooser);		
		
		system("CLS");
		
		arrayOptions(array);
		break;
	case 4:
		system("CLS");
		arrayOptions(array);
		break;
	default:
		system("CLS");
		std::cout << "Zostala wprowadzona bledna wartosc, ponow wybor\n";
		arrayRemovingOptions(array);
		break;
	}

}
