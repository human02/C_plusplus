/*
This
is
a
multiline
comment
*/
#include <iostream>

consteval int get_value()
{
    return 7;
}

// Main fn is the netry point of the program
int main()
{
    constexpr int value = get_value();
    std::cout << "Hello World, the vaule is " << value << std::endl;

    // this tells O that the main was successfully run.
    return 0;
}
