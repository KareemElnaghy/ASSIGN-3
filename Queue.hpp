//
//  Queue.hpp
//  Assignment 3
//
//  Created by Kareem Elnaghy on 3/25/23.
//

#ifndef Queue_hpp
#define Queue_hpp
#include <iostream>
using namespace std;
#include <stdio.h>
template <class T>
class Queue
{
private:
    int rear;
    int front;
     int count;
    T *values;
    int maxSize;
    
public:
    //constructor
    Queue(int x)
    {
        maxSize = x;
        rear=-1;
        front = -1;
        values= new T [maxSize];
        count=0;
    }
    //destructor
    ~Queue()
    {
        delete []values;
    }
//checks if queue is empty
    bool isEmpty()
    {
        if(front == -1 && rear==-1)
            return true;
        else
            return false;
    }
//checks if queue is full
    bool isFull()
    {
        if(front== 0 && rear == maxSize -1)
            return true;
        else
            return false;
    }
//sets value of type T in queue
    void push(T x)
    {
        if(isFull())
        {
            
            cout<<"Queue is full"<<endl;
        }
        else
        {
            
            rear = (rear+1)%maxSize;
            values[rear] = x;
            count++;
            if(front == -1)
            front = 0;
        }

    }
//removes value from queue
    T pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return T();
        }
        else
        {
            return values[front];
        }
    }
    //prints the queue 
    void printQueue() {
        cout << "front -->";
        for (int i = 0; i < count; i++) {
            if (i == 0) cout << "\t";
            else        cout << "\t\t";
            cout << values[(front + i) % maxSize];
            if (i != count - 1)
                cout << endl;
            else
                cout << "\t<-- rear" << endl;
        }
    }

};
#endif /* Queue_hpp */


