#include <stdio.h>
#include "listMethods.c"

int main(){
    struct Node *head = create_Node();
    struct Node *tail = head;
    for(int i = 1; i < 20; i++){
        tail = append(tail,i);
    }
    struct Node *low = findInRange(head,NULL,10);
    struct Node *high = findInRange(head,NULL,15);
    
    struct Node *res = findInRange(low,high,15);
    if( res != NULL ) {printf("%d",res->data);};

    struct Node *res2 = findInRange(low,high,17);
    if( res2 == NULL ) {printf("search Failed");};
}
