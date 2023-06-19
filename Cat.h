#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

#include "Pet.h"


class Cat : public Pet {

public:
Cat();
Cat(string username, int userhappy, int userawake, int userfullness);

void menu();

void playwith();
void pet();
void feed();


//void catchangehappyStatus();
//void catchangesleepyStatus();
//void catchangeboredStatus();














};