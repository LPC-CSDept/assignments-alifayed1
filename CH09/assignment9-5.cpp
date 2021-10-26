#include <iostream>
using namespace std;

struct Node{
  int num;
  struct Node* next;
};

int main()
{
	Node *new_node, *head, *ptr;

	head = nullptr;

	for(int i=0; i<5;i++) {
		new_node = new Node;
		cout << "Enter your num : " ;
		cin >> new_node->num;
		new_node->next = nullptr;

		if ( head == nullptr) {
			head = new_node;
		} else {
			ptr = head ;
			while( ptr->next != nullptr) {
				ptr = ptr->next;
			}
			ptr->next = new_node;
		}
	}
    
  ptr = head;
  int i = 1;

	while(ptr != nullptr) {
		cout << i++ << " node's value " << ptr->num << endl;        
		ptr = ptr->next;
  }
}