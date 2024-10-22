#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void example3() { 
  // REVIEW 3a : Vector Manipulation
   cout << "\n\n*********************************************\n";

   cout << "REVIEW 3a: Vectors" << endl;
   unsigned int i;
   vector<int> Newvector{2, 3, 4, 5, 6, 7, 8}; 
   for (i = 0; i < Newvector.size(); i++) { 
      if (Newvector.at(i) % 2 == 0) { 
         Newvector.erase(Newvector.begin()+i); 
         i--; 
      } 
   } 
   cout << "\t";
   for (i = 0; i < Newvector.size(); i++) 
      cout << ' ' << Newvector.at(i); 
   cout << endl<<endl;

  // REVIEW 3b - Dynamic Arrays
  cout << "REVIEW 3b: Dynamic Arrays" << endl;

  int *myArr = new int[10];
  for (int i = 0; i < 10; i++)
    myArr[i] = i;

  cout << "\t";
  for (int i = 0; i < 10; i++)
    cout << myArr[i] << " ";
  cout << endl;
  delete [] myArr;
  myArr = nullptr;
  cout << endl << endl;

  cout << "REVIEW 3c: Pointers" << endl;

  int myInt;
  int* myScore;
  int myVar;

  myInt = 10;
  myScore = &myInt;
  myVar = 20;
  myVar = *myScore;
  cout << "\t" << *myScore << " " << myVar << " " << myInt << endl;

  *myScore = 30;
  myVar = 40;
  myVar = *myScore;
  myInt = 55;

  cout << "\t" << *myScore << " " << myVar << " " << myInt << endl;

  cout << endl << endl;
}

