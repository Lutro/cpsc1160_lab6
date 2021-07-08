#include "Node.h"
#include "Util/FileUtil.h"
#include "Util/SortUtil.h"
#include <iostream>
#include <fstream>
#include <iomanip> 
using namespace std;

void display (Node<Employee> *, string[]);
void displayMenu();
const int H_SIZE = 6;

int main() 
{
    Node<Employee> *head = nullptr;
    string header[H_SIZE];
    
    CSVReader reader = CSVReader("Employee_Data.csv");
    reader.readFile(&head, header, H_SIZE);
    

    SortUtil su;
    su.mergeSort(&head);
    int option;
    
    while (cin && option != 2)
    {
        displayMenu();
        cin >> option;
        switch (option) 
        {
            // display all employees
            case 1: 
                display(head,header);
                break;
            case 2:
            // exit
                return 0;
         }
    }
    
    return 0;
}

void display (Node<Employee> * n, string header[]) {
    
    Employee p;
    
    for (int x = 0 ; x < H_SIZE ; x++)
    {
        cout << setw(25) << header[x];
    }
    cout << endl;
    cout << endl;
    
    double sum = 0;
    
    while (n != nullptr) {
        p = n->p;
        cout << p << endl;
        n = n->next;
        sum += stod((p.salary).substr(1));
    }
    cout << setw(140) << right << "Total Salary: " << sum << endl;
    cout << setw(50) << " " << "Report prepared by Joan Gamez, Timothy Wu, and Youwei Wan" << endl;
    cout << endl;
} 

void displayMenu()
{
     cout << "1. Display All\n" 
         << "2. Exit"
         << endl;
}
