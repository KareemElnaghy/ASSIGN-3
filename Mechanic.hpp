//
//  Mechanic.hpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#ifndef Mechanic_hpp
#define Mechanic_hpp
#include "Person.hpp"
#include "Customer.hpp"
using namespace std;

class Mechanic:public Person
{
private:
    int counter;
    Appointment *apps = new Appointment[counter];
    
public:
    Mechanic();
    Mechanic(string, int, int);
    bool isAvailable(const Appointment&) const ;
    //setters
    void setArr(const Appointment&);
    void setCounter(int);
    //getters
    int getCount() const;
    void printInfo();
    
    
};
#endif /* Mechanic_hpp */
