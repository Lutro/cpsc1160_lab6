#include "Node.h"
// #include "Util/FileUtil.h"
// #include "Util/SortUtil.h"
#include <iostream>
#include <fstream>
#include <iomanip> 
using namespace std;

// void display (Node *, string[]);
const int H_SIZE = 6;

int main() 
{
    // Node *head = nullptr;
    // string header[H_SIZE];
    
    // CSVReader reader = CSVReader("Employee_Data.csv");
    // reader.readFile(&head, header, H_SIZE);
    
    // display(head,header);
    
    // SortUtil su;
    // su.quickSort(head);
    
    // display(head,header);
    
    Employee e = Employee();
    cout << e << endl;

    
    return 0;
}

// void display (Node * n, string header[]) {
//     cout << "\nPrinting the data..." << endl;
//     Employee p;
    
//     for (int x = 0 ; x < H_SIZE ; x++)
//     {
//         cout << setw(15) << header[x];
//     }
//     cout << endl;
//     while (n != nullptr) {
//         p = n->p;
//         cout << p << endl;;
//         n = n->next;
//     }
//     cout << endl;
// } 

