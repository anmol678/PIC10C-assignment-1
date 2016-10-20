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
   //Lets test our implementation of Card class
    Card random1;
    Card random2;
    Card random3;
    
    std::cout << "BEGIN TEST\n";
    
    std::cout << "First card is "+random1.get_spanish_rank()+" of "+random1.get_spanish_suit()+"\n";
    std::cout << "First card in English is "+random1.get_english_rank()+" of "+random1.get_english_suit()+"\n";
    
    std::cout << "Second card: "+random2.get_english_rank()+" of "+random2.get_english_suit()+"\n";
    std::cout << "Third card: "+random3.get_english_rank()+" of "+random3.get_english_suit()+"\n";

    int r2 = random2.get_rank();
    int r3 = random3.get_rank();
    
    if (r2 == r3)
        std::cout << "Second and third cards have equal rank\n";
    else
        std::cout << "Second and third cards do not have equal rank\n";
    
    r2 = random2.get_value();
    r3 = random3.get_value();
    
    if (r2 > r3) {
        std::cout << "Second card has higher value than the third card\n";
        if (random1.get_rank() > r2)
            std::cout << "First card has highest value\n";
        else
            std::cout << "Second card has highest value\n";
    }
    else
        std::cout << "Third card has higher value than the second card\n";
    
    if (random1 < random2)
        std::cout << "second card is greater than the first card\n";
    else
        std::cout << "first card is greater than the second card\n";
    
    std::cout << "END TEST\n";
    
   return 0;
}