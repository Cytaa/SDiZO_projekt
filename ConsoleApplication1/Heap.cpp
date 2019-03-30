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
	
}

