//
//  Person.cpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#include "Person.hpp"
#include <iostream>
using namespace std;

//For class Person
Person::Person()
{
    name = " ";
    id_ = 0;
    age=0;
}
//setters
void Person::setName(string n)
{
    name = n;
}
void Person::setID(int x)
{
    id_=x;
}
void Person::setAge(int a)
{
    age = a;
}
//getters
string Person::getName()const
{
    return name;
}
int Person::getID()const
{
    return id_;
}
int Person::getAge()const
{
    return age;
}
//print func

void Person::printInfo()
{
}

Person::Appointment::Appointment()
{
    hours=mins=0;
}

Person::Appointment::Appointment(int h, int m)
{
    if(h<0 || h>23)
    {
        hours = -1;
    }
    else
    {
        hours = h;
    }
    
    if(m<0 || h>59)
    {
        mins = -1;
    }
        
    else
    {
        mins = h;
    }
}

void Person::Appointment::printApp()const
{
    cout<<hours<<":"<<mins;
}
