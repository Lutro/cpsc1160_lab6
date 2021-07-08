#include "FileUtil.h"
#include <fstream>
#include <iostream>

/*
 *   Csv reader class
 *
 */
CSVReader::CSVReader(string fileName, string delm) : fileName(fileName), delimeter(delm) 
{
    
}


void CSVReader::readFile(Node** head_ref, string header[], int header_size)
{
    ifstream file;
    file.open(this->fileName);
    
    string line;
    int pos;
    
    getline(file,line);
    for (int x = 0, pos ; x < header_size; x++) 
    {
        pos = line.find(",");
        header[x] = line.substr(0, pos > 0 ? pos : line.length());
        line.erase(0, pos+1);
    }
    
    T p;
    while (getline(file,line))
    {
       
        pos = line.find(",");    
        p.id = stoi(line.substr(0,pos));
        line.erase(0, pos+1);
        pos = line.find(","); 
        p.firstname = line.substr(0,pos);
        p.balance = stod(line.substr(pos+1));
        (*head_ref)->pushData(head_ref,p);
    }
    
    
    file.close();
    
}


