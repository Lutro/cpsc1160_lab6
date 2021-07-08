// filename: SortLib.h

#ifndef SORTLIB_H 
#define SORTLIB_H 

#include "../Node.h"
#include "../Employee.h"

class SortUtil 
{
    public:

        void swap (Person* a, Person* b);
        Node *lastNode(Node *root);
        Node* partition(Node *l, Node *h);
        void _quickSort(Node* l, Node *h);
        // It mainly calls _quickSort()
        void quickSort(Node *head);
    
};

#endif