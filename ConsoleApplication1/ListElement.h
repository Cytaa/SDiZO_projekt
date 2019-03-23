#pragma once

class ListElement
{
public:
	int data;
	ListElement *next;
	ListElement *previuos;
	int wartosc;

	ListElement(int, ListElement *, ListElement*);
};
