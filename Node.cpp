#include "Node.h"


template <typename T> void Node::pushData(Node ** head_ref, T data)
{
    //create a new node with the new element
    Node * new_node = new Node(data);
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