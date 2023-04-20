#include <iostream>
int main()
{
    int a;
    std::cout << "Enter a" << std::endl;
    std::cin >> a;

    if (a>0)
        if (a%2==0)
            std::cout << "pologitelnoe chetnoe chislo" ;
        else
            std::cout << "pologitelnoe nechetnoe chislo" ;
    else if (a<0)
        if (a%2==0)
            std::cout << "otricatelnoe chetnoe chislo" ;
        else
            std::cout << "otricatelnoe nechetnoe chislo" ;
    else
        std::cout << "nulevoe chislo" ;

    return 0;
}
