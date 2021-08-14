#include <iostream>
#include "Header.h"
int main()
{
    std::cout << "Hello, Welcome!\n";
    User client("Tharani");
    std::cout << "Name : " << client.getName()<<"\n";
    return 0;
}
