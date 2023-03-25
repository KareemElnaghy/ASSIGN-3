//
//  Mechanic.cpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#include "Mechanic.hpp"
Mechanic::Mechanic():Person(){
    counter=0;
    apps = NULL;
}

Mechanic::Mechanic(string n, int i, int a):Person(n, i, a), counter(0), apps(NULL)
{}

bool Mechanic::isAvailable(const Appointment& x) const
{
    for (int i = 0; i < counter; i++)
        {
            if (apps[i].hours == x.hours && apps[i].mins == x.mins)
                return false;
        }
                return true;
}

//setters
void Mechanic::setArr(const Appointment& x)
{
    if (counter == 0)
    {
        this->counter++;
        apps[0] = x;
    }
    else
    {
        if (counter != 24)
            this->apps[counter++];
        else
            cout << "No Available Slots" << endl;
    }

}
void Mechanic::setCounter(int x)
{
    counter = x;
}
//getters
int Mechanic::getCount() const
{
    return counter;
}
void Mechanic::printInfo()
{
    cout<<"Mechanic: "<<getName()<<endl;
    cout<<"Mechanic Age: "<<getAge()<<endl;
    cout<<"Mechanic ID: "<<getID()<<endl;
    
    for(int i=0; i<getCount();i++)
    {
        cout<<getName()<<" appointment "<<i+1<<" at "; apps[i].printApp();cout<<endl;
        
    }
}

