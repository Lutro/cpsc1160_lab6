#include "Node.h"


template <typename T> void Node<T>::pushData(Node<T> ** head_ref, T data)
{
    //create a new node with the new element
    Node<T> * new_node = new Node<T>(data);
    new_node->next = ( * head_ref);
    ( * head_ref) = new_node;
}


// Employee popData(Node ** head_ref)
// {
//     Employee p = (*head_ref)->getElement();
//     (* head_ref)->next = (* head_ref)->prev;
//     (* head_ref)->prev = ((*head_ref)->prev)->prev;
//     return p;
// }