#include "pch.h"
#include "List.h"
#include <cstddef>


List::List()
{
	this->first = NULL;
	this->current = NULL;
	this->last;
	this->size = 0;
}


List::~List()
{
	for(int i = 0; i < size; i++)
	{
		current = first->next;
		delete first;
		first = current;
	}
}



void List::addHead(int data)
{
	if(size == NULL)
	{
		first = new ListElement(data, NULL, NULL);
		last = first;
	}
	else
	{
		current = first;
		
		first = new ListElement(data, current, NULL);

		current->previuos = first;
	}
}

void List::addTail(int data)
{
	if(size == NULL)
	{
		first = new ListElement(data, NULL, NULL);
		last = first;
	}
	else
	{
		current = last;
		last = new ListElement(data, NULL, current);
		current->next = last;
	}


	
}

void List::addMiddle(int data, int position)
{
	if(position > 0 && position < size)
	{
		

		
	}
}









