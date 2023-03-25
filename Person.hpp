//
//  Person.hpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int id_;
    int age;
    
public:
    //default constructor
    Person();
    Person(string n, int i, int a);
    //setters
    void setName(string n);
    void setID(int x);
    void setAge(int a);
    //getters
    string getName()const;
    int getID()const;
    int getAge()const;
    //print func
    
    virtual void printInfo()=0;
    
  //appointment struct
    struct Appointment
    {

        int hours;
        int mins;
        
        Appointment();
        Appointment(int, int);
        void printApp()const;
       
    };


#endif /* Person_hpp */
