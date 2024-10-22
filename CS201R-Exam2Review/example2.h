#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "tempConvert.h"
#include "Shapes.h"
#include "HomeAppliance.h"
#include "School.h"

void example2(){
//REVIEW 2a:  Working with Classes
   cout << "\n\n*********************************************\n";

   cout << "REVIEW 2: Classes" << endl;
   TempConvert testData;
   cout << "Beginning tests." << endl;
   if (testData.getTemp() != 0) {
      cout << "   FAILED 1: initialize/get temp" << endl;
   }
   testData.setTemp(10);
   if (testData.getTemp() != 10) {
      cout << "   FAILED 2: set/get temp" << endl;
   }
   testData.setTemp(0);
   if (testData.inFahrenheit() != 32) {
      cout << "   FAILED 3: InFahrenheit for 32 degrees" << endl;
   }
   cout << "Tests complete." << endl;
   cout << endl<<endl;

// REVIEW 2b: Working with Classes
   cout << "REVIEW 2b" << endl;
   Shapes s(7);
   cout << s;
   cout << endl << endl;
  
  // REVIEW 2c - Working with Classes
   cout << "REVIEW 2c" << endl;
   MixerGrinder mixer1("Mixer #1", "Grind objects", 449.99);
   mixer1.setPrice(145.50);
   mixer1.printDetails();
   cout << endl << endl;
  
  // REVIEW 2d - Working with Classes
   cout << "REVIEW 2d" << endl;
   cout << "\t" << School::getY() << endl;
   School mySchool[5];
   cout << "\t" << School::getY() << endl;
   cout << endl << endl;
}
  