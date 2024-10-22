#include "Linked.h"

Linked::Linked() {
   headPtr = nullptr;
   tailPtr = nullptr;
}
Linked::Linked(dataType d) {
	Node* tempPtr = new Node;
	tempPtr->data = d;
	tempPtr->nextPtr = nullptr;
    headPtr = tempPtr;
    tailPtr = tempPtr;
}
/* NOT IN SORTED ORDER - ADDING TO THE END OF THE LIST
void Linked::addNode(dataType d) {
  //create tempNode 
	Node* tempNode = new Node;
  tempNode->data = d;
  tempNode->nextPtr = nullptr;

  //if the list empty - make headptr & tailptr point to tempNode
  if (headPtr == nullptr){
    headPtr = tempNode;
    tailPtr = tempNode;
  }

  //add node after tailptr and update tailptr
  else{
    tailPtr->nextPtr = tempNode;
    tailPtr = tempNode;
  }
}
*/
// SORTED ORDER - ADDING IN AGE ORDER
void Linked::addNode(dataType d) {
  //setup newNode
  Node* newNode = new Node;
  newNode->data = d;
  newNode->nextPtr = nullptr;

  //if list empty - set headPtr & tailPtr to newNode
  if (headPtr == nullptr){
    headPtr = newNode;
    tailPtr = newNode;
  }
  else{
    // if newNode is added to the beginning of the list
    // update headptr
    if (headPtr->data.age > newNode->data.age){
      newNode->nextPtr = headPtr;
      headPtr = newNode;
    }  
    else{
      // loop through list to find where to insert
      // update pointers to add new node
      Node *tempPtr = headPtr;
      // advance pointer
      while(tempPtr->nextPtr != nullptr &&
            tempPtr->nextPtr->data.age < newNode->data.age)
        tempPtr = tempPtr->nextPtr;
      // insert node following tempPtr
      newNode->nextPtr = tempPtr->nextPtr;
      tempPtr->nextPtr = newNode;

      // check if node is added to the end of list
      if (tempPtr == tailPtr)
          tailPtr = newNode;
    }
  }
}

void Linked::delNode(string name) {
  Node* tempNode = headPtr;
  //delete headptr?
  if (tempNode != nullptr && tempNode->data.name == name){
      headPtr = headPtr->nextPtr;  //update headptr
      delete tempNode;             //free space
      tempNode = nullptr;          //set pointer to null
      if (headPtr == nullptr)
          tailPtr == nullptr;
      return;
  }
  else {
      //move through the list
      while (tempNode != nullptr &&
             tempNode->nextPtr != nullptr) {
          //are we pointing to the node to delete?
          if (tempNode->nextPtr->data.name == name) {
              Node* delNode = tempNode->nextPtr;    // set up tempNode (to delete)
              tempNode->nextPtr = delNode->nextPtr; // redirect pointer to bypass node to be deleted
              if (tempNode->nextPtr == nullptr)     // update tail if we are at the end of the list
                  tailPtr = tempNode;
              delete delNode;                       //delete node
              delNode = nullptr;
              return;
          }
          //otherwise advance tempNode
          tempNode = tempNode->nextPtr;
      }
  }
  cout << name << " not found in the list.\n";
}

void Linked::printList() {
  Node *tempPtr = new Node;
  tempPtr = headPtr;
  while(tempPtr != nullptr){
    cout << tempPtr->data.name << " "
         << tempPtr->data.age << endl;
    tempPtr = tempPtr->nextPtr;
  }
  cout << endl << endl;
}