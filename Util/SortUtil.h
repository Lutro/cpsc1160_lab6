// filename: SortLib.h

#ifndef SORTLIB_H 
#define SORTLIB_H 

#include "../Node.h"
#include "../Employee.h"

class SortUtil 
{
    public:
    
      
        
        Node<Employee>* sortedMerge(Node<Employee>* a, Node<Employee>* b);
        void frontBackSplit(Node<Employee>* source, Node<Employee>** frontRef, Node<Employee>** backRef);
        
        void mergeSort(Node<Employee>** headRef);
        

        // void swap (Person* a, Person* b);
        // Node<Employee> *lastNode<Employee>(Node<Employee> *root);
        // Node<Employee>* partition(Node<Employee> *l, Node<Employee> *h);
        // void _quickSort(Node<Employee>* l, Node<Employee> *h);
        // // It mainly calls _quickSort()
        // void quickSort(Node<Employee> *head);
    
};

#endif