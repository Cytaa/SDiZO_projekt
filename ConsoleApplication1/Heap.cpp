#include "pch.h"
#include "Heap.h"
#include <cstddef>
#include <iostream>


Heap::Heap()
{
	this->array = NULL;
	this->size = 0;
}


Heap::~Heap()
{
	if(this->size > 0)
	{
		delete[] array;
	}
}


void Heap::add(int data)
{
	if(size == 0)
	{
		int *newArray = new int[1];

		newArray[0] = data;

		delete[] array;
		
		array = newArray;

		size++;

		repair();
	}
	else
	{
		int *newArray = new int[size + 1];

		for(int i = 0; i < size; i++)
		{
			newArray[i] = array[i];
		}
		

		newArray[size] = data;

		delete[] array;

		array = newArray;

		size++;
		
		repair();
	}


}

void Heap::repair()
{
	int helper;
	for (int y = size; y >= 0; y--)
	{
		for (int i = y; i >= 0; i--)
		{
			if (array[(i - 1) / 2] < array[i])
			{
				helper = array[(i - 1) / 2];

				array[(i - 1) / 2] = array[i];

				array[i] = helper;
			}
		}
	}
}


void Heap::remove(int data)
{
	int* newArray = new int[size - 1];
	int y = 0;
	
	for(int i = 0 ;i < size - 1; i++)
	{
		
		if(array[i] == data)
		{
			y++;
		}
		newArray[i] = array[y];

		y++;
	}
	delete[] array;

	array = newArray;
	size--;
	repair();
}

void Heap::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout <<"["<< array[i] << "] ";
	}
	std::cout << std::endl;
}

