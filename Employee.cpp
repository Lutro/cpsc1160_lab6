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
            << setw(15) << P.id
            << setw(15) << P.firstname
            << setw(15) << P.lastname
            << setw(15) << P.gender
            << setw(15) << P.department
            << setw(15) << P.salary << endl;
}