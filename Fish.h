#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

#include "Pet.h"

class Fish : public Pet{
public:

Fish();
Fish(string username, int userhappy, int userawake, int userfullness);

void menu();
void playwith();
void pet();
void feed();







  
};