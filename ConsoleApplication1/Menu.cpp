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
	list->addMiddle(9, 1);

	list->removeHead();
	list->removeHead();
	
	//std::cout << list->size;
	list->current = list->first;

	for(int i = 0; i < list->size; i++)
	{
		
		std::cout << list->current->data;
		if(i < list->size -1)
		{
		list->current =	list->current->next;
		}
		
		
			
		
	}
	


	system("PAUSE");
	return 0;
}

