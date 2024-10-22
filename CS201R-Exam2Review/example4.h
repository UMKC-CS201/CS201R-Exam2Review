#include "Linked.h"

void example4(){
    // REVIEW 4 - Linked Lists
    cout << "\n\n*********************************************\n";

    cout << "REVIEW 4" << endl;
    Linked list1;
    dataType temp1;

    temp1.name = "Bugs Bunny";     temp1.age = 44; list1.addNode(temp1);
    temp1.name = "Yosemite Sam";   temp1.age = 95; list1.addNode(temp1);
    temp1.name = "Daffy Duck";     temp1.age = 24; list1.addNode(temp1);
    temp1.name = "Stewie Griffin"; temp1.age = 1;  list1.addNode(temp1);
    temp1.name = "Buzz Lightyear"; temp1.age = 27; list1.addNode(temp1);
    temp1.name = "Porky Pig";      temp1.age = 19; list1.addNode(temp1);
    list1.printList();
    cout << endl << endl;

    list1.delNode("Kenobi");
    list1.delNode("Bugs Bunny");
    list1.delNode("Stewie Griffin");
    cout << endl << endl;
    list1.printList();

    cout << endl << endl;
}