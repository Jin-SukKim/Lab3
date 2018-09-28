//
// Created by user on 9/28/2018.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"
#include <iostream>


TEST_CASE("A new stack is empty", "[stack") {
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}
TEST_CASE("Push variable until array is full", "[stack") {
    Stack tester;
    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);
    REQUIRE(tester.push(10) == false);
    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);
}
TEST_CASE("return variable from last variable to first", "[stack") {
    Stack tester;

    REQUIRE(tester.top() == -1);

    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == false);

    REQUIRE(tester.top() == 2);
    tester.pop();
    REQUIRE(tester.top() == 1);
    tester.pop();
    REQUIRE(tester.top() == 0);
    tester.pop();
    REQUIRE(tester.top() == -1);


    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);


}

TEST_CASE("print array and functions are working", "[stack")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

    REQUIRE(tester.top() == -1);

    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(8) == true);
    REQUIRE(tester.push(9) == true);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);

    REQUIRE(tester.print().compare("0 1 2 3 4 5 6 7 8 9") == true);

    REQUIRE(tester.top() == 9);
    tester.pop();
    REQUIRE(tester.top() == 8);
    tester.pop();
    REQUIRE(tester.top() == 7);
    tester.pop();
    REQUIRE(tester.top() == 6);
    tester.pop();
    REQUIRE(tester.top() == 5);
    tester.pop();
    REQUIRE(tester.top() == 4);
    tester.pop();
    REQUIRE(tester.top() == 3);
    tester.pop();
    REQUIRE(tester.top() == 2);
    tester.pop();
    REQUIRE(tester.top() == 1);
    tester.pop();
    REQUIRE(tester.top() == 0);
    tester.pop();
    REQUIRE(tester.top() == -1);

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

}