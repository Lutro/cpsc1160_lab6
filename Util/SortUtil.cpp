// Filename: SortLib.cpp

#include <iostream>

#include "SortUtil.h"


// /* A utility function to swap two elements */
// void SortUtil::swap (Employee* a, Employee* b)
// { Employee t = *a; *a = *b; *b = t; }
 
// // A utility function to find
// // last node of linked list
// Node<Employee> *SortUtil::lastNode<Employee>(Node<Employee> *root)
// {
//     while (root && root->next)
//         root = root->next;
//     return root;
// }
 
// /* Considers last element as pivot,
// places the pivot element at its
// correct position in sorted array,
// and places all smaller (smaller than
// pivot) to left of pivot and all greater
// elements to right of pivot */
// Node<Employee>* SortUtil::partition(Node<Employee> *l, Node<Employee> *h)
// {
//     // set pivot as h element
//     Employee x = h->p;
 
//     // similar to i = l-1 for array implementation
//     Node<Employee> *i = l->prev;
 
//     // Similar to "for (int j = l; j <= h- 1; j++)"
//     for (Node<Employee> *j = l; j != h; j = j->next)
//     {
//         if (j->p <= x)
//         {
//             // Similar to i++ for array
//             i = (i == NULL)? l : i->next;
 
//             swap(&(i->p), &(j->p));
//         }
//     }
//     i = (i == NULL)? l : i->next; // Similar to i++
//     swap(&(i->p), &(h->p));
//     return i;
// }
 
// /* A recursive imp.getElement()lementation
// of quicksort for linked list */
// void SortUtil::_quickSort(Node<Employee><Employee>* l, Node<Employee><Employee> *h)
// {
//     if (h != NULL && l != h && l != h->next)
//     {
//         Node<Employee><Employee> *p = partition(l, h);
//         _quickSort(l, p->prev);
//         _quickSort(p->next, h);
//     }
// }
 
// // The main function to sort a linked list.
// // It mainly calls _quickSort()
// void SortUtil::quickSort(Node<Employee><Employee> *head)
// {
//     // Find last node
//     Node<Employee><Employee> *h = lastNode<Employee><Employee>(head);
 
//     // Call the recursive QuickSort
//     _quickSort(head, h);
// }


void SortUtil::mergeSort(Node<Employee>** headRef)
{
    Node<Employee>* head = *headRef;
    Node<Employee>* a;
    Node<Employee>* b;
 
    /* Base case -- length 0 or 1 */
    if ((head == NULL) || (head->next == NULL)) {
        return;
    }
 
    /* Split head into 'a' and 'b' sublists */
    frontBackSplit(head, &a, &b);
 
    /* Recursively sort the sublists */
    mergeSort(&a);
    mergeSort(&b);
 
    /* answer = merge the two sorted lists together */
    *headRef = sortedMerge(a, b);
}

Node<Employee>* SortUtil::sortedMerge(Node<Employee>* a, Node<Employee>* b)
{
    Node<Employee>* result = NULL;
 
    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
 
    /* Pick either a or b, and recur */
    if (a->p <= b->p) {
        result = a;
        result->next = sortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = sortedMerge(a, b->next);
    }
    return (result);
}

void SortUtil::frontBackSplit(Node<Employee>* source,
                    Node<Employee>** frontRef, Node<Employee>** backRef)
{
    Node<Employee>* fast;
    Node<Employee>* slow;
    slow = source;
    fast = source->next;
 
    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
 
    /* 'slow' is before the midpoint in the list, so split it in two
    at that point. */
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}
 