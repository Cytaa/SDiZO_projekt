#include "pch.h"
#include "Array.h"
#include "List.h"
#include "Heap.h"
#include <iostream>

int main()
{
	Heap* heap = new Heap;

	heap->add(1);
	heap->add(2);
	heap->add(3);
	heap->add(4);
	heap->add(5);
	heap->add(6);
	heap->add(2);
	heap->add(9);
	heap->add(7);
	heap->add(1);
	
	
	
	heap->print();

		


	system("PAUSE");
	return 0;
}

