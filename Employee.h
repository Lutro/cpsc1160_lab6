#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iomanip>
using namespace std;

class Employee {
    public:
        bool operator< (const Employee& ) const;
        bool operator> (const Employee& ) const;
        bool operator<= (const Employee& ) const;
        bool operator>= (const Employee& ) const;
        friend ostream &operator<<(ostream &output, const Employee &P);
    
    // private:
        int id;
        string firstname;
        string lastname;
        string gender;
        string department;
        double salary;
};

#endif