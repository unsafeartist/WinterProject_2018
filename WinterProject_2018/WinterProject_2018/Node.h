#ifndef NODE_
#define NODE_

//Templated Node Class to allow for any generic data to be used with it
template<class Generic_Type>
class Node
{
	private:
		//Generic "item" to be contained within node
		Generic_Type item;

		//Pointer in node to next node
		Node<Generic_Type>* node_ptr;
		
	public:
		Node();

		Node(const Generic_Type input_item);

		Node(const Generic_Type input_item, const Node<Generic_Type>* nodePtr_input);

		void setItem(Generic_Type input);

		void setNext(Node<Generic_Type>* input_ptr);

		Generic_Type getItem() const;

		Node<Generic_Type>* getNext() const;

};

#endif NODE_
