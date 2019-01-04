//Author Kamaljot Saini
#include "Node.h"

template<class Generic_Type>
Node<Generic_Type>::Node()
{
	//Default Constructor

	//Set ptr in node to "null"
	Node<Generic_Type>* node_ptr = nullptr;
}

template<class Generic_Type>
Node<Generic_Type>::Node(const int)
{
}

template<class Generic_Type>
Node<Generic_Type>::Node(const Generic_Type& input_item)
{
	//Paramterized Constructor 1

	//Set item private attribute in Node to input
	//passed into paramaterized constructor
	item = input_item;

	//Set ptr in node to "null"
	Node<Generic_Type>* node_ptr = nullptr;
}

template<class Generic_Type>
Node<Generic_Type>::Node(const Generic_Type& input_item, const Node<Generic_Type>* nodePtr_input)
{
	//Parameterized Constructor 2

	//Set item private attribute in Node to input
	//passed into paramaterized constructor
	item = input_item;

	//Set ptr in node to input node ptr
	Node<Generic_Type>* node_ptr = nodePtr_input;
}

template<class Generic_Type>
void Node<Generic_Type>::setItem(const Generic_Type& input)
{
	item = input;
}

template<class Generic_Type>
void Node<Generic_Type>::setNext(Node<Generic_Type>* nextInput_ptr)
{
	node_ptr = nextInput_ptr;
}

template<class Generic_Type>
Generic_Type Node<Generic_Type>::getItem() const
{
	return item;
}

template<class Generic_Type>
Node<Generic_Type>* Node<Generic_Type>::getNext() const
{
	return node_ptr;
}