#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Person.h"

void example1(){
// REVIEW 1: Classes & Inheritance
  cout << "*********************************************\n";
  cout << "EXAMPLE 1: Classes, Inheritance, Polymorphism" << endl;
  cout << "A\n";
  Person per1("Javier Sanchez", 32);
  per1.print();
  cout << endl << endl;

  cout << "B\n";
  Student stu1("Abe Smith", 15, 65);
  stu1.setScore(80);
  stu1.print();
  cout << stu1.getName() << " has the grade: " << stu1.getGrade();
  cout << endl << endl;

  cout << "C\n";
  vector <Person*> peoplePtr;
  peoplePtr.push_back(&per1);
  peoplePtr.push_back(&stu1);

  Student* stu2 = new Student("Bob Smith", 25, 15);
  peoplePtr.push_back(stu2);

  Person* per2 = new Person("Carol Ross", 22);
  peoplePtr.push_back(per2);

  cout << "D\n";
  cout << "\nPrint vector\n";
  for (int i = 0; i < peoplePtr.size(); i++) {
      peoplePtr.at(i)->print();
  }
  cout << endl << endl;

  //similar to example 5
}