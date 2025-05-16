#include "comm.h"
#include <string>
#include <cctype>

std::string greetName(std::string name) {
    return "Hello, " + name + ", and welcome to the one and only Paradise Pets!";
}

void formatAddress(std::string* address){
    for(int i = 0; i < (*address).length(); i++){
        (*address)[i] = toupper((*address)[i]);
    }
}


std::string closingItem(std::string prodName){
    return "Goodbye! Thank you for shopping at Paradise Pets! We hope you enjoy your new " + prodName + " and return sometime soon!";
}
