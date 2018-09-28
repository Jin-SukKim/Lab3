//
// Created by user on 9/28/2018.
//

#include "stack.hpp"
#include <iostream>
#include <sstream>
using namespace std;
stack::stack()
{
    count = -1;
}

bool stack::push(int value)
{
    if(count==(MAX-1)){
        cout<<"The stack is full"<<endl;
        return false;
    }
    count++;
    a[count] = value;
    return true;
}

void stack::pop()
{
    if(count>0){
        count--;
    } else {
        cout<<"No elements"<<endl;
    }
}

int const stack::top()
{
    if(count>=0){
        return a[count];
    }
    return -1;
}

bool const stack::empty()
{
    return count == -1;
}

bool const stack::full()
{
    return count == MAX - 1;
}

ostringstream const stack::print()
{
    ostringstream oss;
    for(int i=0; i<=count; i++){
        oss << a[i] << " ";
    }
    return oss;
}