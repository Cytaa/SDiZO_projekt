#pragma once

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

	bool exisist(int value);
	


};
