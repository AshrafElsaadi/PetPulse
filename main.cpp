#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include <fstream>
using namespace std;

int main() {
cout << "Type in 1/2 and hit enter for your choice" << endl;
cout << "========================" << endl;
cout << "1) New Pet" << endl;
cout << "2) Retrive past pet" << endl;
cout << "========================" << endl;
  int amount = 0;
int userselection;
  cin >> userselection;
if(userselection == 1){
cout << "LOAD YOUR PET... " << endl;
cout << endl;
cout << "1--{...CAT...}" << endl;
cout << "2--{...DOG...}" << endl;
cout << "3--{...FISH..}" << endl;
cin >> userselection;
}
else if(userselection == 2){
cout << "Enter file:" << endl;
string userfile;
cin >> userfile;
  {
    cout << "File doenst exist" << endl;
  exit(-1);
  }
  
}  
if(userselection == 1){
cout << "So you've chosen cat, what would you like to name your pet..." << endl;
  string petsname;
  cin >> petsname;
  Cat the;
  the.setName(petsname);
  do{

  the.menu();
  cin >> userselection;
  if(userselection == 1){
    the.playwith();
  }
  if(userselection == 2){
    the.pet();
  }
  if(userselection == 3){
    the.feed();
  }

if(userselection == 0){
cout << "You have been exited out the game, thank you for playing";
  break;
  }
if(userselection > 3 || userselection < 0){
  cout << "Invalid selection. Restart Game";
  break;
}






    

if(the.getfullnessStatus() < 40){
cout << endl;
cout << "[P.S. Kitty is hungry and growing impatient]" << endl;
cout << endl;
}
if(the.gethappyStatus() < 0){
cout << endl;
cout << "[P.S. Kitty is depressed :/]" << endl;
cout << endl;
  
}
    if(the.gethappyStatus() > 0){
the.sethappyStatus(100);
}
if(the.getawakeStatus() < 0){
  cout << endl;
  cout << "[P.S. Kitty is sleep-deprived this will kill them after 5 times if their sleep is still below/n zero]" << endl;
  cout << endl;
  amount++;
  if(amount == 5){
    the.petdead();
  break;
  }
}
if(the.getfullnessStatus() < 0){
  the.petdead();
  break;
}
if(the.getfullnessStatus() >= 100){
  the.setfullnessStatus(100);
  cout << endl;
  cout << "[Kittens stomach is now digesting at the same time it is being fed.]"<< endl;
    cout << endl;
}


    
  }
  while(userselection != 0);
  }

  
if(userselection == 2){
cout << "So you've chosen Dog, what would you like to name your pet..." << endl;
  string petsname;
  cin >> petsname;
  Dog the;
  the.setName(petsname);
  do{

  the.menu();
  cin >> userselection;
  if(userselection == 1){
    the.playwith();
  }
  if(userselection == 2){
    the.pet();
  }
  if(userselection == 3){
    the.feed();
  }

    if(userselection == 0){
cout << "You have been exited out the game, thank you for playing";
  break;
  }
if(userselection > 3 || userselection < 0){
  cout << "Invalid selection. Restart Game";
  break;
}

if(the.getfullnessStatus() < 60){
cout << endl;
cout << "[P.S. doggy is hungry and growing VERY VERY impatient]" << endl;
cout << endl;
}
if(the.gethappyStatus() < 0){
cout << endl;
cout << "[P.S. doggy is depressed, it wont kill them, but darn are they sad :/]" << endl;
cout << endl;
  
}
    if(the.gethappyStatus() > 0){
the.sethappyStatus(100);
}
if(the.getawakeStatus() < 0){
  cout << endl;
  cout << "[P.S. doggy is sleep-deprived this will kill doggy after 3 times if their sleep is still below 0]" << endl;
  cout << endl;
  amount++;
  if(amount == 3){
    the.petdead();
  break;
  }
}
if(the.getfullnessStatus() < 0){
  the.petdead();
  break;
}
if(the.getfullnessStatus() >= 100){
  the.setfullnessStatus(100);
  cout << endl;
  cout << "[Doggy's stomach is now digesting at the same time it is being fed. Doggy likes being over fed even if it is bad for it.]"<< endl;
    cout << endl;
}



    
  }
  while(userselection != 0);

  
  }if(userselection == 3){
cout << "So you've chosen Fish, what would you like to name your pet..." << endl;
  string petsname;
  cin >> petsname;
  Fish the;
  the.setName(petsname);
  do{

  the.menu();
  cin >> userselection;
  if(userselection == 1){
    the.playwith();
  }
  if(userselection == 2){
    the.pet();
  }
  if(userselection == 3){
    the.feed();
  }
if(userselection == 0){
cout << "You have been exited out the game, thank you for playing";
  break;
  }
if(userselection > 3 || userselection < 0){
  cout << "Invalid selection. Restart Game";
  break;
}


if(the.getfullnessStatus() < 35){
cout << endl;
cout << "[P.S. fishy is hungry and growing impatient]" << endl;
cout << endl;
}
if(the.gethappyStatus() < 25){
cout << endl;
cout << "[P.S. fishy is depressed :/]" << endl;
cout << endl;
  
}
    if(the.gethappyStatus() > 0){
the.sethappyStatus(100);
}
if(the.getawakeStatus() < 0){
  cout << endl;
  cout << "[P.S. fishy is sleep-deprived this will kill them after 11 times if their sleep is still below/n zero]" << endl;
  cout << endl;
  amount++;
  if(amount == 11){
    the.petdead();

  break;
  }
}
if(the.getfullnessStatus() < 0){
  the.petdead();
  break;
}
if(the.getfullnessStatus() >= 100){
  the.setfullnessStatus(100);
  cout << endl;
  cout << "[Fishs stomach is now digesting at the same time it is being fed.]"<< endl;
    cout << endl;
}


  }
  while(userselection != 0);
  }






  
   return 0;

  
}




//Fish the("nigger", 12, 44, 44);
//the.menu();
  //int numb;
//cin >> numb;
  
//if(numb == 1){
  //the.playwith();
//}