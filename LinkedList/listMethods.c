#include <stdlib.h>

// Node is building block of singlely linked list
struct Node {
	int data;   // Field for Data the node  will hold
	struct Node *next; // Field for incorporating the address of the next node 
};


// *create_sNode() dynamically allocates a node and returns a pointer to it
struct Node* create_Node(){
	return (struct Node *) malloc( sizeof(struct Node) );
}

// * append function create a new node , add data to it and set it to the last of the list 
// * and returns a pointer to that newly created node
struct Node* append(struct Node* tail, int data){
    struct Node *newNode = create_Node();
    newNode->data = data;
    tail->next = newNode;
    newNode->next = NULL;
    return newNode;
}
// * prepend function create a new node, add data to it and set it as the head of the list 
// * and returns a pointer to that newly created node
struct Node* prepend(struct Node* head, int data){
    struct Node *newNode = create_Node();
    newNode->data = data;
    newNode->next = head;
    return newNode;
}
/* findInRange accepts a Range and a data to search ;
 * it the searches the data in the given range 
 * if it finds the data ; then the node containing the data is returned 
 * else a NULL is returned to show that the data doesnt exist in linked List
*/
struct Node* findInRange(struct Node* head, struct Node* tail, int data){
    while(head != tail){
        if(head->data == data){
            return head;
        }
        head = head->next;
    }
    if(head == NULL) { return NULL ;}
    return head->data == data ? head : NULL;
}


struct Node* find(struct Node* head, int data){
    return findInRange(head,NULL,data);
}

