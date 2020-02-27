/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         Handle this possible input when you write your divide() functions.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */
#include <iostream>

struct FloatType
{
    float add(float lhs, float rhs)
    {
        return lhs + rhs;
    }
    float subtract(float lhs, float rhs)
    {
        return lhs - rhs;
    }    
    float multiply(float lhs, float rhs)
    {
        return lhs * rhs;
    }
    float divide(float lhs, float rhs)
    {
        if(rhs == 0)
        {
            std::cout << "Warning, divide by zero! Detected \n"; 
        }
        return lhs / rhs;
    }
};

struct DoubleType
{
    double add(double lhs, double rhs)
    {
        return lhs + rhs;
    }
    double subtract(double lhs, double rhs)
    {
        return lhs - rhs;
    }    
    double multiply(double lhs, double rhs)
    {
        return lhs * rhs;
    }
    double divide(double lhs, double rhs)
    {
        if(rhs == 0)
        {
            std::cout << "Warning, divide by zero! Detected \n"; 
        }
        return lhs / rhs;
    }
};

struct IntType
{
    int add(int lhs, int rhs)
    {
        return lhs + rhs;
    }
    int subtract(int lhs, int rhs)
    {
        return lhs - rhs;
    }    
    int multiply(int lhs, int rhs)
    {
        return lhs * rhs;
    }
    int divide(int lhs, int rhs)
    {
        if(rhs == 0)
        {
            std::cout << "Warning, divide by zero! Detected \n"; 
            return 0;
        }
        return lhs / rhs;
    }
};


int main()
{
    FloatType floatInstance;
    DoubleType doubleInstance;
    IntType intInstance;

    auto floatResultOne = floatInstance.add(1.4f, 3.4f);
    auto floatResultTwo = floatInstance.divide(15.f, 3.4f);

    auto doubleResultOne = doubleInstance.multiply(1.3259823, 9.1512314361);
    auto doubleResultTwo = doubleInstance.subtract(134.937682, 34.444662);

    auto intResultOne = intInstance.multiply(15, 53);
    auto intResultTwo = intInstance.divide(150, 0);

    std::cout << "result of floatOne.add() = " << floatResultOne << std::endl;
    std::cout << "result of floatOne.divide() = " << floatResultTwo << std::endl;
    std::cout << "resule of doubleInstance.multiply = " << doubleResultOne << std::endl;
    std::cout << "resule of doubleInstance.subtract = " << doubleResultTwo << std::endl;
    std::cout << "resule of intInstance.multiply = " << intResultOne << std::endl;
    std::cout << "resule of intInstance.divide = " << intResultTwo << std::endl;

    std::cout << "Math complete!" << std::endl;
}
