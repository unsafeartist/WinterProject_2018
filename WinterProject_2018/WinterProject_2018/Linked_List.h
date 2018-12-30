#ifndef Linked_List_
#define Linked_List_

#include "Node.h"

template<class Item_Type>
class Linked_List
{
	private:
		int itemCounter;
		Node<Item_Type>* headPtr;

		/*This method is declared private, because it is for internal
		use only by this data structure*/
		Node<Item_Type>* getPointerTo(const Item_Type& item_toFind, Node<Item_Type> *curPtr) const;
	public:
		Linked_List();
		Linked_List(int count, Node<Item_Type>* input_headPtr);

		int getSize();
		bool isEmpty();
		void view_LinkedList();
		bool add(const Item_Type& new_item);
		//bool remove(const Item_Type& item);
		//void clear();
		//bool contains(const Item_Type& this_item);

		//virtual ~Linked_List();
};

template<class Item_Type>
Linked_List<Item_Type>::Linked_List()
{
	//Default Constructor

	itemCounter = 0;
	headPtr = nullptr;
}

template<class Item_Type>
Linked_List<Item_Type>::Linked_List(int count, Node<Item_Type>* input_headPtr)
{
	//Parameterized Constructor

	itemCounter = count;
	headPtr = input_headPtr;
}

template<class Item_Type>
int Linked_List<Item_Type>::getSize()
{
	return itemCounter;
}

template<class Item_Type>
bool Linked_List<Item_Type>::isEmpty()
{
	//If the headptr is pointing to nothing, 
	//then we know the Linked List is empty
	if (headPtr == nullptr)
		return true;
	else
		return false;
}

template<class Item_Type>
bool Linked_List<Item_Type>::add(const Item_Type& new_item)
{
	//Create a Node pointer that points to a dynamically 
	//allocated node
	Node<Item_Type>* ptr_newNode = new Node<Item_Type>();

	//Set up the new node to be inserted into Linked List
	{
		//Add new item to the new Node
		ptr_newNode->setItem(new_item);

		//Set the pointer in node to the beginning of the Linked List
		ptr_newNode->setNext(headPtr);
	}
	
	//HeadPtr now points to the new node
	headPtr = ptr_newNode;

	//Increase coutner to keep track of the Linked List size
	itemCounter++;

	return true;
}

//PRIVATE METHOD INTERNAL USE FOR DATA STRCUTURE ONLY
template<class Item_Type>
Node<Item_Type>* Linked_List<Item_Type>::getPointerTo(const Item_Type& item_toFind, Node<Item_Type> *curPtr) const
{
	//THIS IS A RECURSIVE FUNCTION

	//Create a pointer and assign it null value
	Node<Item_Type>* result = nullptr;

	if (curPtr != nullptr)
	{
		if (item_toFind == curPtr->getItem())
			result = curPtr;
		else
			result = getPointerTo(item_toFind, curPtr->getNext());
	}

	return result;
}

template<class Item_Type>
void Linked_List<Item_Type>::view_LinkedList()
{
	//This function will display the list

	//Make a pointer to traverse through the list
	Node<Item_Type>* traverse_ptr = headPtr;

	//Traverse through list
	while (traverse_ptr != nullptr)
	{
		//Display the item that is within node
		std::cout << traverse_ptr->getItem() << std::endl;

		//move to the next node
		traverse_ptr = traverse_ptr->getNext();
	}
}

#endif Linked_List_
