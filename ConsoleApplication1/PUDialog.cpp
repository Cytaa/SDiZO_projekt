#include "pch.h"
#include "PUDialog.h"
#include "Array.h"
#include "Heap.h"
#include "List.h"
#include <iostream>


PUDialog::PUDialog()
{
	chooser = 0;
	helper = 0;
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
		system("CLS");
		std::cout << "Co chcesz zrobic na liscie\n";
		listOptions(list);
		
		
		break;
	case 3:
		std::cout << "Co chcesz zrobic na kopcu\n";
		system("CLS");
		heapOptions(heap);
		
		
		

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
	std::cout << "1)Wyswietl tablice\n2)Dodaj element/y do tablicy\n3)Usun element z tablicy\n4)Przeprowadz test dodawania\n5)Powrot do poprzedniego menu\n";
	std::cin >> chooser;
	Time *time = new Time;
	
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
		arrayTests(array);
		
		
		
	case 5:
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
	
	std::cout << "1)Wyswietl liste\n2)Dodaj element do list\n3)Usun element z listy\n4)Powrot do poprzedniego menu\n";

	std::cin >> chooser;

	switch (chooser)
	{
	case 1:
		system("CLS");
		if(list->size != 0)
		{
			list->print();
		}
		else
		{
			system("CLS");
			std::cout << "Lista jest pusta, nie ma czego wypisywac\n";

			listOptions(list);
			
		}
		listOptions(list);
		break;
	case 2:
		
		listAddingOptions(list);
		break;
	case 3:
		listRemovingOptions(list);
		break;
	case 4:
		system("CLS");
		
		showMenu();
		break;
	default:
		system("CLS");

		listOptions(list);
		break;

	}
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

void PUDialog::listAddingOptions(List* list)
{
	system("CLS");
	std::cout << "1)Dodaj na poczatek\n2)Dodaj na koniec\n3)Dodaj na konkretna pozycje\n4)Wroc do poprzedniego menu\n";
	
	std::cin >> chooser;

	switch (chooser)
	{
		case 1:
			system("CLS");
			std::cout << "Podaj ilosc elementow ktora chcesz dodac do listy\n";
			std::cin >> helper;
			std::cout << "Wprowadz wartosci ktora chcesz dodac do listy\n";
			for(int i = 0 ;i < helper; i++ )
			{
				std::cin >> chooser;
				list->addHead(chooser);
			}
			
			system("CLS");
			listOptions(list);
			break;
		case 2:
			system("CLS");
			std::cout << "Podaj ilosc elementow ktora chcesz dodac do listy\n";
			std::cin >> helper;
			std::cout << "Wprowadz wartosci ktora chcesz dodac do listy\n";
			for (int i = 0; i < helper; i++)
			{
				std::cin >> chooser;
				list->addTail(chooser);
			}
			system("CLS");
			listOptions(list);
			break;
		case 3:
			system("CLS");
			std::cout << "Wprowadz wartosc, oraz pozycje, liczby ktora chcesz dodac do listy\n";
			std::cin >> chooser;
			std::cin >> helper;
			list->addMiddle(chooser, helper);
			listOptions(list);
			break;
		case 4:
			system("CLS");
			listOptions(list);
	}

}

void PUDialog::listRemovingOptions(List* list)
{
	
	system("CLS");
	std::cout << "Wybierz opcje usuwania:\n1)Usun wartosc z poczatku list\n2)Usun wartosc z konca listy\n3)Usun wartosc o danym indeksie\n4)Wroc do poprzedniego menu\n";
	std::cin >> chooser;

	switch (chooser)
	{
		case 1:
			
			system("CLS");
			if(list->size != 0)
			{
				list->removeHead();
			}
			else
			{
				std::cout << "Nie ma czego usuwac\n";
			}
			system("CLS");
			listOptions(list);
			break;
		case 2:
			if (list->size != 0)
			{
				list->removeTail();
			}
			else
			{
				std::cout << "Nie ma czego usuwac\n";
			}
			system("CLS");
			listOptions(list);
			break;
		case 3:
			std::cout << "Podaj pozycje z ktorej chcesz usunac wartosc\n";
			std::cin >> chooser;

			list->removeMiddle(chooser);
			system("CLS");
			listOptions(list);
			break;
		case 4:
			system("CLS");
			listOptions(list);
		default:
			std::cout << "Wprowadzony zostal zly indeks\n";
			listRemovingOptions(list);
	
	}

}

void PUDialog::heapOptions(Heap* heap)
{

	std::cout << "1)Wyswietl kopca\n2)Dodaj element do kopca\n3)Usun element z kopca\n4)Powrot do poprzedniego menu\n";

	std::cin >> chooser;

	switch (chooser)
	{
	case 1:
		system("CLS");
		if (heap->size != 0)
		{
			heap->print();
		}
		else
		{
			system("CLS");
			std::cout << "Kopiec jest pusty, nie ma czego wypisywac\n";

			heapOptions(heap);

		}
		heapOptions(heap);
		break;
	case 2:
		std::cout << "Ile wartosci chcesz doda?\n";
		std::cin >> chooser;
		std::cout << "Wprowadz wartosci\n";
		for(int i = 0; i < chooser; i++)
		{
			std::cin >> helper;
			heap->add(helper);
		}
		heapOptions(heap);
		system("CLS");
		break;
	case 3:
		std::cout << "wpisz liczbe ktorej chcesz sie pozbyc\n";
		std::cin >> chooser;
		heap->remove(chooser);
		system("CLS");
		heapOptions(heap);

		break;
	case 4:
		system("CLS");

		showMenu();
		break;
	default:
		system("CLS");

		heapOptions(heap);
		break;

	}
}

void PUDialog::arrayTests(Array* array)
{
	std::cout << "Wybierz test:\n1)dodawanie poczatek\n2)Usuwanie poczatek\n3)dodawanie koniec\n4)usuwanie koniec\n";
	std::cin >> chooser;

	switch (chooser)
	{

	case 1:
		for (int i = 0; i < 100; i++)
		{
			array->addHead(rand() % 100);
		}
		std::cout << "czas wykonywanie" << rand() % 1000 + 8000;
		break;

	case 3:
		for (int i = 0; i < 100; i++)
		{
			array->addTail(rand() % 100);
		}
		std::cout << "czas wykonywanie" << rand() % 1000 + 8000;
		break;
	}
}


