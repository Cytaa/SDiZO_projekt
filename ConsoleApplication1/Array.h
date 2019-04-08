﻿#pragma once
#include "Time.h"

class Array
{
	
	
public:
	
	int *head;
	int  size;
	
	Array();
	
	~Array();


	void addHead(int data);
	
	void addTail(int data);

	void addInTheMidle(int data, int position);

	void removeLast();

	void removeHead();

	void removeFromMiddle(int position);

	void printArray();

	int exisist(int value);

	void test(int number);
	


};
