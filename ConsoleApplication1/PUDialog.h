#pragma once
#include "Array.h"
#include "List.h"
#include "Heap.h"

class PUDialog
{
public:
	PUDialog();
	
	~PUDialog();
	
	int chooser = 0;

	int helper;

	void showMenu();

private:
	void arrayOptions(Array *array);

	void listOptions(List *list);
	
	void heapOptions(Heap *heap);

	void arrayAddingOptions(Array *array);

	void arrayRemovingOptions(Array *array);
};

