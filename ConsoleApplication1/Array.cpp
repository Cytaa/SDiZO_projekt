﻿#include "pch.h"
#include "Array.h"
#include "Time.h"
#include <cstddef>
#include <iostream>
#include<stdlib.h>

Array::Array()
{
	Array::head = NULL;
	Array::size = 0;
}

Array::~Array()
{
	if (head != NULL) delete[] head;
}

void Array::addHead(int data)
{
	int *newHead = new int[size + 1];
	newHead[0] = data;

	for(int i = 0; i < size; i++)
	{
		newHead[i + 1] = head[i];
	}
	delete[] head;
	head = newHead;
	size++;
}

void Array::addTail(int data)
{
	int *newHead = new int[size + 1];

	for(int i = 0; i < size; i++)
	{
		newHead[i] = head[i];
	}
	
	newHead[size] = data;
	size++;
	delete[] head;
	head = newHead;
	
}


void Array::addInTheMidle(int data, int position)
{
	if (position < 0 || position > size)
	{
		std::cout << "Blad!\nTaka pozycja nie istnieje w tablicy";
	}
	else
	{
		int *newHead = new int[size + 1];
		
		newHead[position] = data;

		if(position == 0)
		{
			Array::addHead(data);
		}
		else
		{
			if(position == size)
			{
				Array::addTail(data);
			}
			else
			{
				newHead[position] = data;
				for (int i = 0; i < size + 1; i++)
				{
					
					
					
					if (i < position)
					{
						newHead[i] = head[i];
					}
					else
					{
						newHead[i + 1] = head[i];
					}
					
				}
				size++;

				delete head;

				head = newHead;

			
			
			
			
			}
		}
		
		
		
		
		
		}
}


void Array::removeLast()
{
	if (size != 1)
	{
		int *newHead = new int[size - 1];

		for (int i = 0; i < size - 1; i++)
		{
			newHead[i] = head[i];
		}
		size--;
		delete[] head;
		head = newHead;
		

	}
	else
	{
		std::cout << "Z tablicy zostal usuniety ostatni element\n";
		int *newHead = new int[0];
		
		delete[] head;
		head = newHead;
		size = 0;
		

	}
}


void Array::removeHead()
{
	if(size !=1)
	{
		int *newHead = new int[size - 1];

		for(int i = 1; i < size; i++ )
		{
			newHead[i - 1] = head[i];
		}

		delete[] head;
		head = newHead;
		size--;
	}
}

void Array::removeFromMiddle(int position)
{
	if(position > 0 && position <= size)
	{
		int *newHead = new int[size - 1];

		for(int i = 0; i < size - 1; i++)
		{
			if(i < position)
			{
				newHead[i] = head[i];
			}
			else
			{
				newHead[i] = head[i + 1];
			}
		}
		delete[] head;
		head = newHead;
		size--;
	}
}


int Array::exisist(int value)
{
	for(int i = 0; i < size; i++)
	{
		if (head[i] == value) return i;
	}
	std::cout << "Brak danej liczby\n";
}


void Array::printArray()
{
	if ( head != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "[" << head[i] << "] ";
		}
		std::cout <<"\n";
	}
	else
		std::cout << "Tablica jest pusta, nie ma czego wypisywac\n";
}


