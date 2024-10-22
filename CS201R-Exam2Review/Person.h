#pragma once
#include <string>
#include <iostream>
using namespace std;
class Person {
   protected:
      string name;
      int age;
   public:
       Person(string n, int a) {
           cout << "This is the Person constructor: " << n << endl;
           name = n;
           age = a;
       }
       void setName(string n)   { name = n; }
       void setAge(int a)       { age = a; }
       string getName()         {return name;}
       int    getAge()          {return age;}

      ~Person() {
         cout << "This is Person destructor: " << name << endl;
      }
      void print() {
         cout << "Hi Person: " << name << endl;
      }
};

class Student : public Person {
private:
    int score;
public:
    Student(string n, int a, int s) :Person(n, a) {
        cout << "This is the Student constructor: " << n << endl;
        score = s;
    }
    void   setScore(int studentScore);
    string getGrade() const;

    ~Student() {
        cout << "This is the Student destructor: " << name << endl;
    }
    void print() {
        cout << "Student: " << name 
            << ". Your score is: " << score << endl;
    }
};

void Student::setScore(int studentScore) {
    score = studentScore;
}

string Student::getGrade() const {
    string grade;
    if (score < 40) {
        grade = "C";
    }
    else if (score < 70) {
        grade = "B";
    }
    else {
        grade = "A";
    }
    return grade;
}
