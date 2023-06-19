#pragma once

#include <iostream>
#include <iomanip>
using namespace std;


class Pet{
  
public:
  Pet();
  Pet(string username, int userhappy, int userawake, int userfullness);
   void setName(string username); 
   string getName();

   void sethappyStatus(int userhappy);
   void setawakeStatus(int userawake);
   void setfullnessStatus(int userfull);
  
   int gethappyStatus();
   int getawakeStatus();
   int getfullnessStatus();
   
  void petdead();

 protected:
string petname;
int howhappy;
int howawake;
int howfull;





  };