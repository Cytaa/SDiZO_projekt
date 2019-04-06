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
	for(int i = 0; i < size; i++)
	{
		if (array[i] == data)
		{
			int *newArray = new int[size - 1];

			for (int y = 0; y < i; y++)
			{
				newArray[y] = array[y];
			}

			for(int y = 0;y < size; y++)
			{
				newArray[y - 1] = array[y];
			}

			delete[] array;

			array = newArray;

			size--;

		}
	}
	repair();
}

void Heap::print()
{
	if (size == 0)
	{
	std::cout << "Kopiec jest pusty" << std::endl;
		return;
	}
	int iter = 1;
	int sum = 0;
	for (int i = 1; i <= 1 + floor(log2(size)); i++)
	{
		std::cout << "Poziom " << i << ": ";

		for (int j = 0; j < iter; j++)
		{
			if ((j + sum) < size)
			{
				std::cout << array[j + sum] << ", ";
			}
		}
		sum += iter;
		iter = iter * 2;
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

