#include "Cat.h"


Cat::Cat(){
 petname = "";
 howhappy = 60;
 howawake = 50;
 howfull = 50;



  
}
  Cat::Cat(string username, int userhappy, int userawake, int userfullness):
  Pet(username, userhappy, userawake, userfullness){


    
  }
void Cat::menu(){

cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
  cout << endl;
cout << "Please choose a action:-)" << endl;
   cout << endl;
cout << "0) Save and end game." << endl;
cout << "1) Give " << getName() << " their favorite ball to toy with."<< endl;
cout << "2) Scratch and caress " <<  getName() << " and hear that purr." << endl;
cout << "3) Give " << getName() << " their favorite food to satisfy their craving." << endl; 
  cout << endl;
cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;


  }

void Cat::playwith(){
if(howhappy < 100){
 howhappy += 15;}

  howawake += 10;
  howfull -= 15;


cout << "         ," << endl;
cout << "        \)\_" << endl;
cout << "       /    '. .---._" << endl;
cout << "     =P ^     `      '." << endl;
cout << "      `--.       /     \"" << endl;
cout << "      .-'(       \       |" << endl;
cout << "   ~ (.-'   )-..__>   , ;" << endl;
cout << "  (#) (_.--``    (__.-/ /" << endl;
cout << "   ~          .-.__.-'.'" << endl;
cout << "              '-...-'" << endl;
cout << endl;
  cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|" << endl;
}


void Cat::pet(){

 if(howhappy < 100){
 howhappy += 10;}
  howawake -= 20;


cout<< " <-===-> (" << endl;
cout<< " ( ^.^ ) _)" << endl;
cout<< "   \"/  (" << endl;
cout<< " ( | | )" << endl;
cout<< "(__d b__)" << endl;
cout << endl;
  cout << "PuRrRrRrRrRrRrRrRrR" << endl;

  
  cout << endl;
  cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|"<< endl;

}
void Cat::feed(){

 howhappy += 10;
  howawake -= 10;
  if(howfull < 100){
  howfull +=25;}


 cout << "      /|__/|   (`|" << endl;
 cout << "     |^ ^  |.--.) )" << endl;
  cout << "  _  ( T   )     /" << endl;
 cout << " |#| (((^_(((/(((_/" << endl;
  
cout << endl;
  cout << " NumNumNumNumNumNumNum" << endl;
  
  cout << endl;
  cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|^-_-^|^-_-^|^-_-^|^-_-^|^-_-^|"<< endl;
}