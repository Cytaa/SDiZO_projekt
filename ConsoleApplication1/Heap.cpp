#include "pch.h"
#include "Heap.h"
#include <cstddef>


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

void Heap::repair()
{
	int helper;

	for(int i = size; 0 < i; i--)
	{
		if(array[i - 1] < array[i])
		{
			helper = array[i - 1];
			array[i - 1] = array[i];
			array[i] = helper;
		}
	}
}
