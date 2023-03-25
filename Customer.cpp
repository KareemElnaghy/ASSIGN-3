//
//  Customer.cpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#include "Customer.hpp"
#include <iostream>
using namespace std;
//For class Customer
//setters
void Customer::setMecID(int x)
{
    mechanicID=x;
}
void Customer::setApp(const Appointment &a)
{
    appoint = a;
}

//getters
int Customer::getMecID()const
{
    return mechanicID;
}
Customer::Appointment Customer::getApp() const
{
    return appoint;
}

//Overloaded operators
bool Customer::operator >(const Customer& x)
{
    Appointment temp1 = this->getApp();
    Appointment temp2 = x.getApp();
    
    if(temp1.hours > temp2.hours)
        return true;
    else if(temp1.hours < temp2.hours)
        return false;
    else
    {
        if(temp1.mins>temp2.mins)
            return true;
        else
            return false;
    }
}
bool Customer::operator <(const Customer& x)
{
    Appointment temp1 = this->getApp();
    Appointment temp2 = x.getApp();
    
    if(temp1.hours < temp2.hours)
        return true;
    else if(temp1.hours > temp2.hours)
        return false;
    else
    {
        if(temp1.mins<temp2.mins)
            return true;
        else
            return false;
    }
}
bool Customer::operator ==(const Customer& x)
{
    Appointment temp1 = this->getApp();
    Appointment temp2 = x.getApp();
    
    if(temp1.hours == temp2.hours)
    {
        if(temp1.mins == temp2.mins)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
//print function
void Customer::printInfo()
{
    cout<<"Name: "<<getName()<<endl;
    cout<<"ID: "<<getID()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Mechanic's ID: "<<getMecID()<<endl;
    cout<<"The appointment is at ";appoint.printApp();cout<<endl;
}
