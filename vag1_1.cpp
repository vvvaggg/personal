#include <iostream>
int main()
{
    int a;
    std::cout << "Enter a" << std::endl;
    std::cin >> a;

    if (a>0)
        a=a+1;
    else if (a<0)
        a=a-2;
    else
        a=10;

    std::cout << a << std::endl;
    return 0;
}
