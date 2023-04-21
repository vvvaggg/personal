#include <iostream>
int main()
{
    int a, b, c, sum;
    std::cout << "Enter a" << std::endl;
    std::cin >> a;
    std::cout << "Enter b" << std::endl;
    std::cin >> b;
    std::cout << "Enter c" << std::endl;
    std::cin >> c;

    int min = a;
    if (b < min) { min = b; }
    if (c < min) { min = c; }
    sum = a + b + c - min;

    return 0;
}
