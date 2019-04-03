#include "pch.h"
#include "PUDialog.h"
#include <iostream>


PUDialog::PUDialog()
{

}


PUDialog::~PUDialog()
{
}

void PUDialog:: showMenu()
{
	int chooser;
	std::cout << "Projekt SDiZO\nOpracowal student informatyki W4 Piotr Stachnio 241268\nkwiecien-marzec 2019 roku\n\n\n\n\n\n";
	std::cout << "Wybierz strukture danych ktora cie interesuje, poprzez wpisanie nr indeksu oraz nacisniecie klawisza ENTER\n";
	std::cout << "1)Tablica\n2)List dwu-kierunkowa\n3)Kopiec\n";

	std::cin >> chooser;

	switch (chooser)
	{
	case 1:
		std::cout << "Co chcesz zrobic na tablicy\n";
		break;
	case 2:
		std::cout << "Co chcesz zrobic na liscie\n";
		break;
	case 3:
		std::cout << "Co chcesz zrobic na kopcu\n";
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