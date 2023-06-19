#include "Dog.h"



Dog::Dog(){
 petname = "";
 howhappy = 75;
 howawake = 70;
 howfull = 50;



  
}
  Dog::Dog(string username, int userhappy, int userawake, int userfullness):
  Pet(username, userhappy, userawake, userfullness){

    
  }

void Dog::menu(){

cout << "|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|" << endl;
  cout << endl;
cout << "Please choose a action:->)" << endl;
   cout << endl;
cout << "0) Save and end game." << endl;
cout << "1) Play catch with " << getName() << " by throwing their favorite bone across the yard and watch them go."<< endl;
cout << "2) Pet " <<  getName() << "'s head as they doze off." << endl;
cout << "3) Pour " << getName() << " their favorite kibble to satisfy their big stomach." << endl; 
  cout << endl;
cout << "|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|" << endl;





  
}






void Dog::playwith(){

 howhappy += 10;
  howawake += 15;
  howfull -= 25;


cout << "           .--~~,__" << endl;
cout << ":-....,-------`~~'._.'" << endl;
cout << " `-,,,  ,_      ;'~U'" << endl;
cout << "  _,-' ,'`-__; '--." << endl;
cout << " (_/'~~      ''''(;" << endl;

  cout << endl;
  cout << "ARF ARF ARF ARF ARF ARF ARF ARF" << endl;

cout << endl;
  cout << "|()@ Y @()|()@ Y @()|()@ Y @()|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|()@ Y @()|()@ Y @()|()@ Y @()|"<< endl;
}


void Dog::pet(){

 howhappy += 10;
  howawake -= 30;



cout << "      / |__        z" << endl;
cout << "     (    @|___   z  " << endl;
cout << "    /       :: O Z    " << endl;
cout << "   /    (_____/        " << endl;
cout << "  /_____/        "<< endl;

  
  cout << endl;
  cout << "|()@ Y @()|()@ Y @()|()@ Y @()|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|()@ Y @()|()@ Y @()|()@ Y @()|"<< endl;

}
void Dog::feed(){

 howhappy += 10;
  howawake -= 10;
  howfull += 25;

cout << "    ,    /-." << endl;
cout << "   ((___/ __>" << endl;
cout << "   /      }" << endl;
cout << "   \ .--.(   ***" << endl;
cout << "    \\   \\  |___|" << endl;


  
cout << endl;
  cout << "NomNomNomNomNomNomNomNomNom" << endl;
  
  cout << endl;
  cout << "|()@ Y @()|()@ Y @()|()@ Y @()|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|()@ Y @()|()@ Y @()|()@ Y @()|"<< endl;
}

