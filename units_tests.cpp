//
// Created by 虞跃 on 2018-09-27.
//

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() put this in one cpp file


#include "catch.hpp"
#include "stack.hpp"


using namespace std;
/*TEST_CASE("A new stack is empty", "[stack"){
    stack tester;
    REQUIRE(tester.isEmpty() == true);
    REQUIRE(tester.isFull() == false);
}*/


TEST_CASE("A new stack push 10 int and full", "[stack")
{
    stack tester;
    REQUIRE(tester.push(11) == true);
    REQUIRE(tester.push(12) == true);
    REQUIRE(tester.push(13) == true);
    REQUIRE(tester.push(14) == true);
    REQUIRE(tester.push(15) == true);
    REQUIRE(tester.push(16) == true);
    REQUIRE(tester.push(17) == true);
    REQUIRE(tester.push(18) == true);
    REQUIRE(tester.push(19) == true);
    REQUIRE(tester.push(20) == true);
    REQUIRE(tester.push(21) == false);
    REQUIRE(tester.getTop() == 20);
    REQUIRE(tester.isFull() == true);
    tester.print();

}


TEST_CASE("A new stack pop", "[stack")
{
    stack tester;
    REQUIRE(tester.push(11) == true);
    REQUIRE(tester.push(12) == true);
    REQUIRE(tester.push(13) == true);
    REQUIRE(tester.push(14) == true);
    REQUIRE(tester.push(15) == true);
    REQUIRE(tester.push(16) == true);
    REQUIRE(tester.push(17) == true);
    REQUIRE(tester.push(18) == true);
    REQUIRE(tester.push(19) == true);
    REQUIRE(tester.push(20) == true);
    tester.pop();
    REQUIRE(tester.getTop() == 19);
    tester.print();
}


TEST_CASE("print test","[test print]")
{
    stack tester;
    string expectedString = "11 12 13 14";

    REQUIRE(tester.push(11) == true);
    REQUIRE(tester.push(12) == true);
    REQUIRE(tester.push(13) == true);
    REQUIRE(tester.push(14) == true);
    tester.print();

}


