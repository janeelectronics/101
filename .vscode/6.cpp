#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    //ch = ch - 32;
    ch = ch - ('a' - 'A');

    std::cout << ch;
    return 0;
}