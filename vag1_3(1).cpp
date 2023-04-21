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

    if (a>=c && b>=c){
        sum = a + b;
    }
    else if (b>=a && c>=a){
        sum = b + c;
    }
    else{
        sum = a + c;
    }
    std::cout << "sum= " << sum << std::endl;
    return 0;
}
