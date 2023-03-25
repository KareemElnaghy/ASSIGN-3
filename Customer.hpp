//
//  Customer.hpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#ifndef Customer_hpp
#define Customer_hpp
#include "Person.hpp"
#include <stdio.h>
class Customer: public Person
{
private:
    //private data members
    int mechanicID;
    Appointment appoint;
    
public:
    //constructors
    Customer():Person()
    {
        appoint = {0,00};
        mechanicID = 0;
    }
    Customer(string n, int i, int a, const Appointment& app, int mID):Person(n,i,a), appoint(app), mechanicID(mID)
    {
    }
    //setters
    void setMecID(int);
    void setApp(const Appointment &);
    
    //getters
    int getMecID()const;
    Appointment getApp()const;
    
    //Overloaded operators
    bool operator >(const Customer&);
    bool operator <(const Customer&);
    bool operator ==(const Customer&);
    //print func
    void printInfo();
};

#endif /* Customer_hpp */
