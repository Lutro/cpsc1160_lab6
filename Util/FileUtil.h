// filename: CarInfo.h

#ifndef CSVREADER_H 
#define CSVREADER_H 

#include <string>
#include <fstream>
#include "../Node.h"

using namespace std; 

class CSVReader
{
    string fileName;
    string delimeter;
    
    public:
    CSVReader(string fileName, string delm = ",");
    // CSVReader(string, string);
    
    void readFile(Node<Employee>** head_ref, string header[], int header_size);
};


#endif