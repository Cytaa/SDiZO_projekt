#pragma once
#include "ListElement.h"

class List
{
public:
	
	List();
	~List();
	
	ListElement *first;
	ListElement *last;
	ListElement *current;

	void addHead(int data);

	void addTail(int data);

	void addMiddle(int data, int position);

	void removeHead();

	void removeTail();

	void removeMiddle(int position);

	void print();

	void exsists();

	





};
