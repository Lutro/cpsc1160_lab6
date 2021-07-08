#include "Node.h"
#include "Util/FileUtil.h"
#include "Util/SortUtil.h"
#include <iostream>
#include <fstream>
#include <iomanip> 
using namespace std;

void display (Node *, string[]);
const int H_SIZE = 3;

int main() 
{
    Node *head = nullptr;
    string header[H_SIZE];
    
    CSVReader reader = CSVReader("Employee_Data.csv");
    reader.readFile(&head, header, H_SIZE);
    
    display(head,header);
    
    SortUtil su;
    su.quickSort(head);
    
    display(head,header);
    
    cout << "head's address after push: " << &head << endl;
    
    // cout << head->popData() << endl;
    display(head,header);
    
    
    return 0;
}

void display (Node * n, string header[]) {
    cout << "\nPrinting the data..." << endl;
    Person p;
    
    for (int x = 0 ; x < H_SIZE ; x++)
    {
        cout << setw(15) << header[x];
    }
    cout << endl;
    while (n != nullptr) {
        p = n->p;
        cout << setw(15) << p.id << setw(15) << p.firstname << setw(15) << p.balance << endl;;
        n = n->next;
    }
    cout << endl;
} 

