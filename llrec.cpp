#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {
    if (head == NULL) { //base case
        smaller = NULL;
        larger = NULL;
        return;
    }
    
    llpivot(head->next, smaller, larger, pivot); //recurse first bc attach after, or garbage
    if (head->val <= pivot) {
        head->next = smaller; //node points old front of smaller
        smaller = head; //smaller starts at node
    }
    else {
        head->next = larger; //same but for larger
        larger = head;
    }
    head = NULL; //reset node bc already sorted
}
