#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
    //Lets test our implementation of Hand class
    
    std::cout << "BEGIN TEST\n";
    
    Hand t1;
    Hand t2;
    
    t1.printLast();
    
    if (t1.sum() < t2.sum())
        std::cout << "Hand 2 is greater than hand 1\n";
    else
        std::cout << "Hand 1 is greater than hand 2\n";
    
    t1.drawCard();
    t2.drawCard();
    
    if (t1 < t2)
        std::cout << "Hand 2 is  greater than hand 1\n";
    else
        std::cout << "Hand 1 is greater than hand 2\n";
    
    std::cout << "Hand 1: ";
    t1.print();
    
    t1.resetHand();
    std::cout << "Hand 1 reset\n";
    t1.drawCard();
    
    std::cout << "Hand 1: ";
    t1.print();
    
    if (t1 < t2)
        std::cout << "Hand 2 is  greater than hand 1\n";
    else
        std::cout << "Hand 1 is greater than hand 2\n";
    
    std::cout << "END TEST\n";

    return 0;
}