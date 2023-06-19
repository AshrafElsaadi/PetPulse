#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

#include "Pet.h"

class Dog : public Pet{
public:

Dog();
Dog(string username, int userhappy, int userawake, int userfullness);

void menu();
void playwith();
void pet();
void feed();





  
};