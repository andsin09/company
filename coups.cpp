#include "cou.h"
#include <string>
#include <cctype>

std::string tenOff(std::string coupCode){
    return "You have used the coupon: " + coupCode + " for ten percent off at the one and only Paradise Pets! We hope you enjoy this discount!";
}

std::string twentyfiveOff(std::string coupCode){
    return "You have used the coupon: " + coupCode + " for twenty-five percent off at the one and only Paradise Pets! We hope you enjoy this discount!";
}

std::string fiftyOff(std::string coupCode){
    return "You have used the coupon: " + coupCode + " for fifty percent off at the one and only Paradise Pets! We hope you enjoy this discount!";
}

std::string free(std::string freeCode){
    return "You found our super secret code to get the item free! The code was: " + freeCode + "! Congrats!";
}