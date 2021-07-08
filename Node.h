#ifndef NODE_H
#define NODE_H
#include <string>
#include "employee.h"
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
        
        void pushData(Node **, T data);
        T popData();
        
        T getElement() const {
            return p;
        }
    
    // private:
        T p;
        
};

#endif
