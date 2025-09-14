// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Welcome, Please Enter Your Name" << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << "Welcome back, ";
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
