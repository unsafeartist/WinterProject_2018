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

#endif Linked_List_
