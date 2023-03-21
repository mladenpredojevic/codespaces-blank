// GreatestCommonDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>


int main()
{
    unsigned short int num_list_size = 0;
    unsigned int new_number = 0;
    unsigned int cnt = 0;
    auto gcd_val=0;
    auto min_gcd = 0;
    std::vector<int> num_list;
    //unsigned int array_gcd[100]{0};
    std::cout << "Programm for detecting Greatest Common Divisor \n";



    while (cnt<1000) {

        std::cout << "Add a number \n";
        std::cin >> new_number;
        if (4000000000 == new_number) {
            
            break;
        }
        else
            num_list.push_back(new_number);
            //array_gcd[cnt] = new_number;
            
            if (cnt > 0) {
                //gcd_val = std::gcd(array_gcd[cnt], array_gcd[cnt - 1]);
                gcd_val = std::gcd(num_list.at(cnt), num_list.at(cnt-1));
                if (0 != gcd_val && min_gcd > gcd_val) {
                    min_gcd = gcd_val;
                }
            }
            else {
                gcd_val = new_number;
                min_gcd = new_number;
            }
            
        cnt++;
        
               
    }

    std::cout << " Greatest Common Divisor is \n" << min_gcd;

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
