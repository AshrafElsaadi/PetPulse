#include "Pet.h"



Pet::Pet(){
  petname = "";
 howhappy = 80;
 howawake = 80;
 howfull = 50;

  
}
Pet::Pet(string username, int userhappy, int userawake, int userfullness){
petname = username;
howhappy = userhappy;
howawake = userawake;
howfull = userfullness;  
}






void Pet::setName(string username){
petname = username;
  }

   string Pet::getName(){
return petname;
     
   }

   void Pet::sethappyStatus(int userhappy){
howhappy = userhappy;
   }
   void Pet::setawakeStatus(int userawake){
howawake = userawake;
     
   }
   void Pet::setfullnessStatus(int userfullness){
howfull = userfullness;
     
   }
  
   int Pet::gethappyStatus(){
     return howhappy;
   }
   int Pet::getawakeStatus(){
     return howawake;
   }
   int Pet::getfullnessStatus(){
     return howfull;
     
   }
   

void Pet::petdead(){


cout << "                 _  /)" << endl;
cout << "                   / )" << endl;
cout << "                 |/)\)" << endl;
cout << "                  /\_" << endl;
cout << "                  \__|=" << endl;
cout << "                 (    )" << endl;
cout << "                 __)(__" << endl;
cout << "           _____/      \\_____" << endl;
cout << "          |  _     ___   _   ||" << endl;
cout << "          | | |     |   |  | ||" << endl;
cout << "          | |  |    |   |  | ||" << endl;
cout << "          | |_/     |   |_/  ||" << endl;
cout << "          | | |     |   |    ||" << endl;
cout << "          | |  |    |   |    ||" << endl;
cout << "          | |   |. _|_. | .  ||" << endl;
cout << "          |                  || "<< endl;
cout << "          |                  ||" << endl;
cout << "          |                  ||" << endl;
cout << "  *       | *   **    * **   |** " << endl;
cout << "HERE LIES " << getName() << "." << endl;;
 




  
}