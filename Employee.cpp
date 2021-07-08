#include "Employee.h"



bool Employee::operator< (const Employee& r) const
{
    return id < r.id;
}

bool Employee::operator> (const Employee& r) const
{
    return r.id < id;
}

bool Employee::operator>= (const Employee& r) const
{
    return !(id < r.id);
}

bool Employee::operator<= (const Employee& r) const
{
    return !(id > r.id);
}

ostream &operator<<(ostream &output, const Employee &P)
{
    output
            << setw(25) << P.id
            << setw(25) << P.firstname
            << setw(25) << P.lastname
            << setw(25) << P.gender
            << setw(25) << P.department
            << setw(25) << P.salary << endl;
}