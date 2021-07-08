#ifndef NODE_H
#define NODE_H
#include <string>
#include "Employee.h"
using namespace std;

template <typename T>
class Node {

    public: 
        Node *next;
        
        Node() {
            next = nullptr;
        }
        
        Node(T p) {
            this->p = p;
            next = nullptr;
        }
        
        void pushData(Node<T>** node, T data);
    
        
        T getElement() const {
            return p;
        }
    
    // private:
        T p;
        
};

template <typename T> void Node<T>::pushData(Node<T> ** head_ref, T data)
{
    //create a new node with the new element
    Node<T> * new_node = new Node<T>(data);
    new_node->next = ( * head_ref);
    ( * head_ref) = new_node;
}

#endif
