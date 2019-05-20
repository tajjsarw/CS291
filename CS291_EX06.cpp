#include <iostream>
using namespace std;

//node consists of the element or data and a pointer to the next node.
//This is defined using struct
struct node {
	int data;
	node *next;

};

//List object will need to keep the following data all the time:
//Head pointer is needed to hold the address of the first node.
//Tail pointer is needed to hold the address of the last node.
//Size of the number of items in linked list.
class List
{
private:
	int size;
	node * head;
	node * tail;

public:
	//constructor of the class, set head and tail to NULL and size=0
	List() {
		head = NULL;
		tail = NULL;
		size = 0;
	}


	void displayList() {
		node * temp;
		temp = head;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}

	//insert an element (value) at the beginning of the list
	void insert_start(int value) {
		node * temp = new node(); //a node is created
		temp->data = value;
		temp->next = head; //New node points to the current head node.

		//if the list is empty
		if (head == NULL) {
			tail = temp;
		}

		head = temp; //New node becomes the head node.
		size++;

	}
	void insert_end(int value) {
		node * temp = new node(); //a node is created
		temp->data = value;
		temp->next = NULL; //New node’s next link point to NULL.

		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {

			tail->next = temp; //The tail’s next link points to new node.
			tail = temp;
		}

		size++;
	}

	int getSize() {
		return size;
	}
	void insert_position(int value, int position)
	{
		if (position < size)
		{
			node *cur = head;
			node *temp = new node();
			node *pre = new node();
			for (int i = 1; i <= position; i++)
			{
				pre = cur;
				cur = cur->next;
			}
			pre->next = temp;
			temp->data = value;
			temp->next = cur;
			size++;
		}
		else if (position == size)
		{
			insert_end(value);
		}
	}
};




int main(int argc, const char * argv[]) {

	List objList;
	objList.insert_start(3);
	objList.insert_end(5);
	objList.insert_start(2);
	objList.displayList();
	cout << "size of objList is " << objList.getSize() << endl;

	objList.insert_position(8,2);
	objList.displayList();


	system("pause");
	return 0;
}











