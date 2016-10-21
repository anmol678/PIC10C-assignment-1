/*****************************************************************
 Anmol Jain
 October 20, 2016.
 This program plays 'siete y medio' (Spanish version of blackjack)
 against you and  keeps a log of the rounds you played against the
 dealer.
 *****************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"

int main() {
    
    Player player = Player(100); //Player object initialized with amount 100
    int count = 0; //Keeps track of the number of games played
    
    srand(static_cast<int>(time(0)));
    
    count ++;
    
    //Hand objects for player and dealer are declared
    Hand handPlayer = Hand();
    Hand handDealer = Hand();
    
    int money = player.getMoney();
    int bet = 0;
    char choice;
    
    cout <<"\nYou have $" << money << ". "
    << "Enter bet: ";
    cin >> bet; //The bet is input by the player
    
    do {
        cout <<"\nYour cards:\n";
        handPlayer.print(); //The player's cards are displayed
        
        cout << "Your total is " << handPlayer.sum() << ". Do you want another card (y/n)? ";
        cin >> choice; //Total value of cards is displayed and the player is given a choice to draw another card
        
        //If the player declines to draw another card the dealer's cards are displayed and dealer takes the game forward. Subsequently, the total values of player's hand and dealer's hand are compared and it is decided if the player wins or loses the bet.
        if (choice == 'n') {
            cout << "\nDealer's cards: \n";
            handDealer.print();
            cout << "The dealer's total is " << handDealer.sum() << ".\n";
        }
        
        //If the player chooses to draw another card:
        else {
            handPlayer.drawCard();
            cout << "\nNew card:\n";
            handPlayer.printLast();
        }
    } while (choice == 'y');//This loop iterates only if the player opts to draw another card. Otherwise, since the player's turn is over once the dealer draws his cards and values of the two hands are compared the game ends.
    
    return 0;
}