// filename: SortLib.h

#ifndef SORTLIB_H 
#define SORTLIB_H 

#include "../Node.h"
#include "../Person.h"

class SortUtil 
{
    public:
    //     void quickSort(int list[], int arraySize);
    //     int partition(int list[], int first, int last);
        
    //     void quickSort(Player list[], int arraySize);
    //     int partition(Player list[], int first, int last);
    // private: 
    // // this function is only used by quickSort(int list[], int arraySize)
    //     void quickSort(int list[], int first, int last);
    //     void quickSort(Player list[], int first, int last);
        void swap (Person* a, Person* b);
        Node *lastNode(Node *root);
        Node* partition(Node *l, Node *h);
        void _quickSort(Node* l, Node *h);
        // It mainly calls _quickSort()
        void quickSort(Node *head);
    
};

#endif