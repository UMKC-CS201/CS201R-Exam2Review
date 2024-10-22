#pragma once
#include <iostream>
using namespace std;

class Shapes {
   private:
      int sides = 4;
   public:
      Shapes(int x);
      friend ostream& operator<<(ostream&, Shapes s);
};

Shapes::Shapes(int x) {
   this->sides = x;
}

ostream& operator<<(ostream& out, Shapes s) {
   if (s.sides == 4)
      out << "\tThis is a Square!\n";
   else 
      out << "\tThis has " << s.sides << " sides.\n";
   return out;
}