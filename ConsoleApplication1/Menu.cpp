#include "pch.h"
#include "Array.h"
#include "List.h"
#include <iostream>

int main()
{
	List* list = new List();

	list->addHead(1);
	list->addHead(2);
	list->addHead(3);
	list->addTail(0);
	
	list->removeMiddle(1);

	list->print();

		


	system("PAUSE");
	return 0;
}

