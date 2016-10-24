# assignment-1
A C++ implementation of the card game 'siete y medio' also known as seven and a half. The goal of the game is to get the cards whose total value comes to 7.5 without going over it

Files in the repositary: cards.cpp
			 cards.h
			 main.cpp
Author: Anmol Jain
	October 20, 2016

Attributes: cards.h - contains the Card, Hand and Player classed declarations.
	    cards.cpp - contains the implementation of Card, Hand and Player classes.
	    main.cpp - contains the driver function that employs the Card, Hand and Player classes to implement the card game siete y medio against the player/user. the main function also writes game logs to a text file.

Test cases: i) testing for Card class - as in main.cpp in branch testCards
	    ii) testing for Hand class - as in main.cpp in branch testHand
	    iii) several test runs performed during step-by-step implementation of the program

Game log of a test run:
-----------------------------------------------

Game number: 1       Money left: $100
Bet: 10

Your cards:
	Tres de espadas     (Three of swords).  
	Seis de oros        (Six of coins).     
	Caballo de oros     (Knight of coins).  
	Rey de bastos       (King of clubs).    
	Rey de bastos       (King of clubs).    
Your total: 10.5.

Dealer's cards: 
	Tres de oros        (Three of coins).   
	Cuatro de bastos    (Four of clubs).    
	Caballo de copas    (Knight of cups).   
Dealer's total is 7.5.

-----------------------------------------------

Game number: 2       Money left: $90
Bet: 90

Your cards:
	Cuatro de oros      (Four of coins).    
	Sota de copas       (Jack of cups).     
	Caballo de bastos   (Knight of clubs).  
	Rey de bastos       (King of clubs).    
	Rey de bastos       (King of clubs).    
Your total: 6.

Dealer's cards: 
	Tres de oros        (Three of coins).   
	Seis de oros        (Six of coins).     
Dealer's total is 9.

-----------------------------------------------

Game number: 3       Money left: $180
Bet: 30

Your cards:
	Siete de copas      (Seven of cups).    
Your total: 7.

Dealer's cards: 
	Dos de bastos       (Two of clubs).     
	Cuatro de espadas   (Four of swords).   
	Sota de oros        (Jack of coins).    
	Rey de bastos       (King of clubs).    
Dealer's total is 7.

-----------------------------------------------

Game number: 4       Money left: $180
Bet: 30

Your cards:
	Tres de bastos      (Three of clubs).   
	Seis de copas       (Six of cups).      
Your total: 9.

Dealer's cards: 
	Siete de copas      (Seven of cups).    
Dealer's total is 7.

-----------------------------------------------

Game number: 5       Money left: $150
Bet: 150

Your cards:
	Dos de oros         (Two of coins).     
	Cuatro de copas     (Four of cups).     
Your total: 6.

Dealer's cards: 
	Cinco de oros       (Five of coins).    
	Sota de espadas     (Jack of swords).   
Dealer's total is 5.5.

-----------------------------------------------

Game number: 6       Money left: $300
Bet: 300

Your cards:
	As de oros          (Ace of coins).     
	Cuatro de espadas   (Four of swords).   
	Siete de espadas    (Seven of swords).  
Your total: 12.

Dealer's cards: 
	Siete de oros       (Seven of coins).   
Dealer's total is 7.

----------------------------------------------- 
