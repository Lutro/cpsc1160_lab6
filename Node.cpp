#include "Node.h"


void Node::pushData(Node ** head_ref, Employee data)
{
    //create a new node with the new element
    Node * new_node = new Node(data);
    new_node->prev = nullptr;
    
    if ((*head_ref) != nullptr) {
        (*head_ref)->prev = new_node;
    }
    
    new_node->next = ( * head_ref);
    ( * head_ref) = new_node;
}


Employee popData(Node ** head_ref)
{
    Employee p = (*head_ref)->getElement();
    (* head_ref)->next = (* head_ref)->prev;
    (* head_ref)->prev = ((*head_ref)->prev)->prev;
    return p;
}