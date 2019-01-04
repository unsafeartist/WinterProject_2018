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
		Node<Item_Type>* getPointerTo(const Item_Type& item_toFind) const;
	public:
		Linked_List();
		Linked_List(int count, Node<Item_Type>* input_headPtr);

		int getSize();
		bool isEmpty();
		void view_LinkedList();

		bool contains(const Item_Type& item_toRemove);
		bool add(const Item_Type& new_item);
		bool remove(const Item_Type& item_toDelete);
		Item_Type getEntry(const Item_Type& item_toFind);
		
		void clear();
		virtual ~Linked_List();
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

//PRIVATE METHOD INTERNAL USE FOR DATA STRCUTURE ONLY
template<class Item_Type>
bool Linked_List<Item_Type>::contains(const Item_Type& item_toRemove)
{
	/*
	Pre: An input of a generic item

	Post: Returns true or false if item has been found within Linked_List
	*/

	//Declare local variables
	bool flag = false;

	//Set a traversal pointer = to the start of the Linked List
	Node<Item_Type>* traversePtr = headPtr;
	
	//Traverse through Linked_List to find "itemToRemove"
	while (traversePtr != nullptr)
	{
		if (item_toRemove == traversePtr->getItem())
		{
			flag = true;
			break;
		}
		else
			traversePtr = traversePtr->getNext();
	}

	return flag;
}

//PRIVATE METHOD INTERNAL USE FOR DATA STRCUTURE ONLY
template<class Item_Type>
Node<Item_Type>* Linked_List<Item_Type>::getPointerTo(const Item_Type& item_toFind) const
{
	/*
	Pre: 
		1) An input of a generic item
		2) Must ensure that the Linked_List contains the "item_toFind" before using this function

	Post: Returns a pointer set to point to "item_toFind"
	*/
	//Create a pointer and assign it null value
	Node<Item_Type>* traversePtr = headPtr;

	/* Traverse through the list and if you've found the item
	break out of the loop and traversePtr will point to the node with the item,
	else go to the next node
	*/
	while (traversePtr != nullptr)
	{
		if (item_toFind == traversePtr->getItem())
			break;
		else
			traversePtr = traversePtr->getNext();
	}

	//Return the pointer to the node containing the item
	return traversePtr;
}

template<class Item_Type>
bool Linked_List<Item_Type>::add(const Item_Type& new_item)
{
	/*
	Pre: An input of a generic item

	Post: Function will add the new item to the front of the Linked_List
	*/

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

template<class Item_Type>
bool Linked_List<Item_Type>::remove(const Item_Type& item_toDelete)
{
	/*
	Pre: A generic item input

	Post: Removes the item from the Linked_List
	*/

	//Check to see if the item is removable
	if (contains(item_toDelete))
	{
		Node<Item_Type>* ptr_foundItem = getPointerTo(item_toDelete);

		//Swap data from linked list first node to the node that is to be deleted
		ptr_foundItem->setItem(headPtr->getItem());

		//Assign data to new node for deletion,
		//and move the headptr to second node in Linked List
		Node<Item_Type>* ptr_toDeleteNode = headPtr;
		headPtr = headPtr->getNext();

		//Perform actual deletion
		ptr_toDeleteNode->setNext(nullptr);
		delete ptr_toDeleteNode;
		ptr_toDeleteNode = nullptr;

		//Reduce count of Linked List
		itemCounter--;

		return true;
	}
	else
		return false;

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

template<class Item_Type>
Item_Type Linked_List<Item_Type>::getEntry(const Item_Type& item_toFind)
{
	//For Person Class this means searching by name only

	//This function searches linked list and returns the
	Node<Item_Type>* traversal_Ptr = headPtr;

	//Check to see if the Linked List contains it
	if (contains(item_toFind))
	{
		//As long as the Linked_List has data,
		//traverse through it
		while (traversal_Ptr != nullptr)
		{
			if (traversal_Ptr->getItem() == item_toFind)
				return traversal_Ptr->getItem();
		}
	}
}

template<class Item_Type>
void Linked_List<Item_Type>::clear()
{
	//This functions clears/deletes the entire Linked_List
	Node<Item_Type>* deletionPtr = nullptr;
	
	while (headPtr != nullptr)
	{
		deletionPtr = headPtr;
		headPtr = headPtr->getNext();

		delete deletionPtr;
	}

	deletionPtr = nullptr;
}

template<class Item_Type>
Linked_List<Item_Type>::~Linked_List()
{
	//Destructor
	clear();
}

#endif Linked_List_
