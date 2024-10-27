/*
This
is
a
multiline
comment
*/
#include <iostream>

int addNumber(int a, int b)
{
    return a + b;
}

// Main fn is the entry point of the program
int main()
{
    std::cout << "Hello World" << std::endl;
    // it defines the default value of a variable
    int a{3};
    int b{7};
    std::cout << "Addition results in = " << a + b << std::endl;

    std::cout << "Addition results (using Fn) = " << addNumber(20, b) << std::endl;
    // this tells O that the main was successfully run.
    return 0;
}
