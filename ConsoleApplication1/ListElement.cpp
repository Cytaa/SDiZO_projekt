#include "pch.h"
#include "ListElement.h"



ListElement::ListElement(int data, ListElement *next, ListElement *previous)
{
	ListElement::data = data;
	ListElement::next = next;
	ListElement::previous = previous;
}
