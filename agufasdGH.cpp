#include <iostream>
#include <string>
#include <cctype>
#include "comm.h"
#include "comms.cpp"

int main(){
    std::string name;
    std::string address;
    std::string product;

    std::cout << "What is your name, customer?" << std::endl;
    std::cin >> name;
    greetName(name);
    /*std::cout << "What is your address, " << name << "?" << std::endl;
    std::cin >> address;
    std::string* ptr = &address;
    formatAddress(ptr);
    std::cout << "What is the product you are purchasing?" << std::endl;
    std::cin >> product;*/
}