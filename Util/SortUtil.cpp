// Filename: SortLib.cpp

#include <iostream>

#include "SortUtil.h"


/* A utility function to swap two elements */
void SortUtil::swap (Employee* a, Employee* b)
{ Employee t = *a; *a = *b; *b = t; }
 
// A utility function to find
// last node of linked list
Node *SortUtil::lastNode(Node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}
 
/* Considers last element as pivot,
places the pivot element at its
correct position in sorted array,
and places all smaller (smaller than
pivot) to left of pivot and all greater
elements to right of pivot */
Node* SortUtil::partition(Node *l, Node *h)
{
    // set pivot as h element
    Employee x = h->p;
 
    // similar to i = l-1 for array implementation
    Node *i = l->prev;
 
    // Similar to "for (int j = l; j <= h- 1; j++)"
    for (Node *j = l; j != h; j = j->next)
    {
        if (j->p <= x)
        {
            // Similar to i++ for array
            i = (i == NULL)? l : i->next;
 
            swap(&(i->p), &(j->p));
        }
    }
    i = (i == NULL)? l : i->next; // Similar to i++
    swap(&(i->p), &(h->p));
    return i;
}
 
/* A recursive imp.getElement()lementation
of quicksort for linked list */
void SortUtil::_quickSort(Node* l, Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        Node *p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}
 
// The main function to sort a linked list.
// It mainly calls _quickSort()
void SortUtil::quickSort(Node *head)
{
    // Find last node
    Node *h = lastNode(head);
 
    // Call the recursive QuickSort
    _quickSort(head, h);
}