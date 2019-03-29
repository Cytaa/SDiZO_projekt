#include "pch.h"
#include "List.h"
#include <cstddef>
#include <iostream>


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
		size++;
	}
	else
	{
		current = first;
		
		first = new ListElement(data, current, NULL);

		current->previous = first;

		size++;
	}
}

void List::addTail(int data)
{
	if(size == NULL)
	{
		first = new ListElement(data, NULL, NULL);
		last = first;
		size++;
	}
	else
	{
		current = last;
		last = new ListElement(data, NULL, current);
		current->next = last;
		size++;
	}


	
}

void List::addMiddle(int data, int position)
{
	if(position >= 0 && position < size)
	{

		current = first;
		
		for(int i = 0; i <= size ; i++)
		{
			if(i == position)
			{
				
				if(i == 0)
				{
					List::addHead(data);
					return;
				}
				else
				{
					if (i == size)
					{
						List::addTail(data);
						return;
					}else
					{
						current->previous->next = new ListElement(data, current, current->previous);
						current->previous = current->previous->next;
						return;
					}
				}
			}
			current = current->next;
		}		
	}

	size++;
}

void List::removeHead()
{
	if (size == 0)std::cout << "nie ma czego usuwac";
	current = first->next;
	current->previous = NULL;
	delete first;
	first = current;

}








