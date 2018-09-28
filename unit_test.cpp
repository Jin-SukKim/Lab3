//
// Created by user on 9/28/2018.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

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

    REQUIRE(tester.top(0) == true);
    REQUIRE(tester.pop(0) == true);
    REQUIRE(tester.top(1) == true);
    REQUIRE(tester.top(2) == true);
    REQUIRE(tester.top(3) == true);
    REQUIRE(tester.top(4) == true);
    REQUIRE(tester.top(5) == true);
    REQUIRE(tester.top(6) == true);
    REQUIRE(tester.top(7) == true);
    REQUIRE(tester.top(8) == true);
    REQUIRE(tester.top(9) == true);
    REQUIRE(tester.top(10) == false);

    REQUIRE(tester.empty() == false);
    REQUIRE(tester.full() == true);

}