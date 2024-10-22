#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct dataType {
	string name;
	int age;
};

struct Node {
	dataType data;
	Node* nextPtr;
};

class Linked {
private:
	Node* headPtr;
    Node* tailPtr;

public:
	Linked();
	Linked(dataType d);
	void addNode(dataType d);
	void delNode(string name);
	void printList();
};