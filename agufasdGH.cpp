/*
Name: Andrew Sinha
Date: 5/20/2025
Title: Company Consistency Lab
Extra: */

//part 1
#include <iostream>
#include <string>
#include <cctype>

//part 2
#include "comm.h"
#include "comms.cpp"
#include "cou.h"
#include "coups.cpp"


using namespace std;

int main(){
    //part 1
    std::string name;
    std::string address;
    std::string product;
    char charChoice;

    std::cout << "What is your name, customer?" << std::endl;
    std::cin >> name;
    std::cin.ignore();
    std::cout << greetName(name) << std::endl;
    std::cout << "What is your address, " << name << "?" << std::endl;
    std::getline(cin, address);
    std::string* ptr = &address;
    formatAddress(ptr);
    std::cout << *ptr << std::endl;
    std::cout << "What is the product you are purchasing?" << std::endl;
    std::cin >> product;
    std::cout << closingItem(product) << std::endl;

    //part 2
    std::string coupCode;
    std::cout << "Would you like to use a coupon? (Y/N)" << std::endl;
    std::cin >> charChoice;
    char upChoice = std::toupper(charChoice);
    if(upChoice == 'Y'){
        std::cout << "What is the coupon code you would like to use? (ALL CAPS)" << std::endl;
        std::cin >> coupCode;


        if(coupCode == "SIGMA"){
            std::cout << tenOff(coupCode) << std::endl;
        }

        else if(coupCode == "STUDENT"){
            std::cout << twentyfiveOff(coupCode) << std::endl;
        }

        else if(coupCode == "POOR"){
            std::cout << fiftyOff(coupCode) << std::endl;
        }

        else if(coupCode == "IWANTITFORFREE"){
            std::cout << free(coupCode) << std::endl;
        }

        else{
            std::cout << "Not a valid code. Bye!" << std::endl;
            return 0;
        }
    }
    else{
        std::cout << "Okay! Enjoy!" << std::endl;
        return 0;
    }
}