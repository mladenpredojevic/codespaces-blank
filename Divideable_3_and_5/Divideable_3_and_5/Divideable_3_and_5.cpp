// Divideable_3_and_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    unsigned int lowerRange;
    unsigned int higherRange;
    unsigned long long sum = 0ULL;
    std::vector<int> DivSet;
    std::cout << "Divideable number with 3 and 5 inside given limits\n";
    std::cout << "Please set lower range for argument \n";
    std::cin >> lowerRange;
    std::cout << "Please set higher range for argument \n";
    std::cin >> higherRange;

    for (unsigned int i = lowerRange; i < higherRange; i++) {

        if ((i % 3 == 0) || (i % 5 == 0)) {
            DivSet.push_back(i);
            sum += i;
        }
    }

    std::cout << "Suma brojeva deljivih sa 3 i sa 5 je : " << sum << '\n';
    std::cout << "Spisak brojeva iz vectora :" << '\n';
    auto start = DivSet.cbegin();
    auto end = DivSet.cend();
    int cnt = 0;
    while (start != end)
    {  
        
        std::cout << "element:[" << cnt << "]=" << DivSet.at(cnt) << '\n';
        cnt++;
        start++;
    }
    std::cout << "Broj deljivih brojeva je :" << cnt;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
