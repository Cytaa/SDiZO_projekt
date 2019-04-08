#pragma once

class Heap
{
public:
	int* array;
	int size;

	Heap();

	~Heap();

	void add(int data);

	void remove(int data);

	int exists(int data);

	void print();

	void repair();

	int levels();

};
