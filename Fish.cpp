#include "Fish.h"







Fish::Fish(){
 petname = "";
 howhappy = 50;
 howawake = 80;
 howfull = 65;



  
}
  Fish::Fish(string username, int userhappy, int userawake, int userfullness):
  Pet(username, userhappy, userawake, userfullness){

    
  }

void Fish::menu(){

cout << "|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|" << endl;
  cout << endl;
cout << "Please choose a action 0o." << endl;
  cout << endl;
cout << "0) Save and end game." << endl;
cout << "1) Give " << getName() << " a friend for five minutes and watch them swim together and race. "<< endl;
cout << "2) Turn " <<  getName() << "'s tank off and watch them swim slower and slower." << endl;
cout << "3) Tap a few dots of fish food in there for " << getName() << " to consume." << endl; 
  cout << endl;
cout << "|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|><))>|" << endl;
  
}






void Fish::playwith(){

 howhappy += 10;
  howawake += 15;
  howfull -= 25;


cout << "         ,--...," << endl;
cout << "        .''-..'     _"<< endl;
cout << "       /@    `.-:  _/`"<< endl;
cout << "       > )<  ,-.: (_)"<< endl;
cout << "        `..-',:-"<< endl;
cout << "  ,--..   `-'"<< endl;
cout << " .''-.,'     _"<< endl;
cout << "/@    `.-:  (_)"<< endl;
cout << "> )<  ,-.:   +"<< endl;
cout << " `..-',`       "<< endl;
cout << "   `-'"<< endl;

cout << "swimswimswimswimswimswim" << endl;




cout << endl;
  cout << "|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|"<< endl;
}


void Fish::pet(){

 
  howawake -= 35;

cout << " .______________________________." << endl;
cout << "  |`.~~  ~~  ~    ~ ~   ~~~     ~|`." << endl;
cout << "  |~ `.~~ ~  ~~~  ~~~ ~~  ~ ~~~ ~| ~`." << endl;
cout << "  |   ~`._____________________________`." << endl;
cout << "  | ~  ~|~  ~~,   ~~~~  ~~ ~ ~ ~ |~ ~  |" << endl;
cout << "  | ~,  |         ~  ~~  ~~,~  ~ |  ~~ |" << endl;
cout << "  |~~  ~|~ ~~   ~, ~~   <'>>><  ~|~   ~|" << endl;
cout << "  ._____|________________________.~ ~~ |" << endl;
cout << "   `.~  |~ ~~   ~'   ~~~~,  ~  ~~ `.  ~|" << endl;
cout << "     `.~|~  ~~ ~~   ~ ~~~  ~ ~~   ~~`.~|" << endl;
cout << "       `._____________________________`." << endl;
  cout << endl;
cout << "               {dark aquarium}      " << endl;
  
  cout << endl;
  cout << "|0°o.|0°o.|0°o.|0°o.|0°o.|0o.|0°o.|0°o.|0°o.|0°o.||" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|0°o.|0°o.|0°o.|0°o.|0°o.|0°o.|0°o.|0°o.|0°o.|0°o.|"<< endl;

}
void Fish::feed(){

 howhappy += 10;
  howawake -= 10;
  howfull += 25;

cout << "                                        ____"<< endl;
cout << "                  .-""L_            0.. =|Food|"<< endl;
cout << "             ;`, /   ( o|      0        ---- "<< endl;  
cout << "             |  ;    `, / 0       " << endl;         
cout << "             ;_/`.__.-"  << endl;




cout << "OOoOOOOoOOOoOOoOOOOOooOoooooOOOoooOooOOoOOOOOOoOoo"<< endl;

  
  cout << endl;
  cout << "|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|" << endl;
  cout << endl;
cout << "Happyness: " << gethappyStatus() << endl;
  cout << endl;
cout << "Awakness: " << getawakeStatus() << endl;
  cout << endl;
cout << "Stomach fullness: " << getfullnessStatus() << endl;
cout << endl;
cout << "|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|0o.|"<< endl;
}

