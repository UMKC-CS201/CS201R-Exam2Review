#pragma once
#include <iostream>
#include <vector>
using namespace std;

//define parent class
class Parent {
protected:
    string name;
public:
    Parent() { name = "unknown"; }
    Parent(string n) { name = n; }
    void setName(string n) { name = n; }
    void print() const {
        cout << "Here is parent " << name << endl;
    }
};

//define child class
class Child : public Parent {
private:
    bool underAge;

public:
    Child() : Parent() { underAge = false; }
    Child(string n, bool u) : Parent(n) { underAge = u; }
    void setUA(bool u) { underAge = u; }
    void print() const {
        cout << "Here is child: " << name;
        if (underAge == true)
            cout << " is underage. " << endl;
        else
            cout << " is not underage." << endl;
    }
};

void example5() {
    cout << endl << endl;
    cout << "****************************************\n";
    cout << "REVIEW 5a" << endl;
    Parent pOne("ParentOne");
    Parent pTwo("ParentTwo");
    Child  cOne("ChildOne", true);
    Child  cTwo("ChildTwo", true);
    pOne.print();
    pTwo.print();
    cOne.print();
    cTwo.print();
    pOne = cOne;
    pOne.print();
    cout << endl << endl;
    cout << "****************************************\n";
    cout << "REVIEW 5b" << endl;
    vector <Parent> myList1;
    myList1.push_back(pOne);
    myList1.push_back(pTwo);
    myList1.push_back(cOne);
    myList1.push_back(cTwo);
    for (int i = 0; i < myList1.size(); i++) {
        myList1.at(i).print();
    }
    cout << "****************************************\n";
    cout << "REVIEW 5c" << endl;
    vector <Parent*> myList2;
    Parent* pThree = new Parent("ParentThree");
    Child* cThree = new Child("ChildThree", true);
    cThree->setUA(0);
    myList2.push_back(&pOne);
    myList2.push_back(&pTwo);
    myList2.push_back(&cOne);
    myList2.push_back(&cTwo);
    myList2.push_back(pThree);
    myList2.push_back(cThree);

    //have the parent point to TheChild
    pThree = cThree;
    myList2.push_back(pThree);
    for (int i = 0; i < myList2.size(); i++) {
        myList2.at(i)->print();
    }
}
