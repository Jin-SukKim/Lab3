//
// Created by user on 9/28/2018.
//

#include "stack.hpp"
#include <iostream>
#include <sstream>
using namespace std;
Stack::Stack()
{
    count = -1;
}

bool Stack::push(int value)
{
    if(count==(MAX-1)){
        return false;
    }
    count++;
    a[count] = value;
    return true;
}

void Stack::pop()
{
    if(count>-1){
        count--;
    }
}

int const Stack::top()
{
    if(count>=0){
        return a[count];
    }
    return -1;
}

bool const Stack::empty()
{
    return count == -1;
}

bool const Stack::full()
{
    return count == MAX - 1;
}

string const Stack::print()
{
    ostringstream oss("");
    for(int i=0; i<=count; i++){
        oss << a[i] << " ";
    }
    return oss.str();
}