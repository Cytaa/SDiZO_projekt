#pragma once

class ListElement
{
public:
	int data;
	ListElement *next;
	ListElement *previous;
	int wartosc;

	ListElement(int, ListElement *, ListElement*);
};
