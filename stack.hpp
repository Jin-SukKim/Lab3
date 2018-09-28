//
// Created by user on 9/28/2018.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP
#include <iostream>
#include <sstream>
using namespace std;

class Stack {

    private:
        static constexpr int MAX = 10;
        int a[MAX];
        int count;
    public:
        Stack();
        bool push(int);
        void pop();
        int const top();
        bool const empty();
        bool const full();
        string const print();

};


#endif //LAB3_STACK_HPP
