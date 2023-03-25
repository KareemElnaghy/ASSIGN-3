//
//  main.cpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/22/23.
//


#include "Customer.hpp"
#include "Person.hpp"
#include "Mechanic.hpp"
#include "Queue.hpp"
#include <iostream>
#include <string>
using namespace std;

// function prototypes
void bookAppointment(Queue<Customer>& customers, Mechanic& mechanic);

int main()
{
    // create a queue to hold customer appointments
    Queue<Customer> customerQueue(10);

    // create three mechanics
    Mechanic mechanic1("Kareem", 1, 28);
    Mechanic mechanic2("Jana", 2, 34);
    Mechanic mechanic3("Mohammed", 3, 26);

    // set mechanics' available times
    mechanic1.setArr(Person::Appointment(9, 0));
    mechanic1.setArr(Person::Appointment(10, 30));
    mechanic1.setArr(Person::Appointment(14, 0));

    mechanic2.setArr(Person::Appointment(8, 0));
    mechanic2.setArr(Person::Appointment(11, 0));
    mechanic2.setArr(Person::Appointment(13, 30));

    mechanic3.setArr(Person::Appointment(10, 0));
    mechanic3.setArr(Person::Appointment(12, 0));
    mechanic3.setArr(Person::Appointment(16, 0));

    // print mechanics' information
    cout << "Mechanic 1: ";
    mechanic1.printInfo();
    cout << "Mechanic 2: ";
    mechanic2.printInfo();
    cout << "Mechanic 3: ";
    mechanic3.printInfo();

    // book appointments
    bookAppointment(customerQueue, mechanic1);
    bookAppointment(customerQueue, mechanic2);
    bookAppointment(customerQueue, mechanic3);
    bookAppointment(customerQueue, mechanic1);
    bookAppointment(customerQueue, mechanic2);
    bookAppointment(customerQueue, mechanic3);
    bookAppointment(customerQueue, mechanic1);
    bookAppointment(customerQueue, mechanic2);
    bookAppointment(customerQueue, mechanic3);
    bookAppointment(customerQueue, mechanic1);

    // print customer appointments
    cout << "\nCustomer Appointments:\n";
    while (!customerQueue.isEmpty())
    {
        customerQueue.pop();
        customerQueue.printQueue();
    }

    return 0;
}

void bookAppointment(Queue<Customer>& customers, Mechanic& mechanic)
{
    string name;
    int id, age, hours, mins;

    cout << "\nEnter customer information:\n";
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> id;
    cout << "Age: ";
    cin >> age;

    cout << "Enter appointment time:\n";
    cin >> hours;
    cin >> mins;

    Customer::Appointment app(hours, mins);
    Customer customer(name, id, age, app, mechanic.getID());

    if (mechanic.isAvailable(app))
    {
        mechanic.setArr(app);
        customers.push(customer);
        cout << "Appointment booked successfully."<<endl;
    }
    else
    {
        cout << "Mechanic is not available at this time"<<endl;
    }
}

