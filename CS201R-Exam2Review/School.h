class School { 
private:
      static int y;
public:
    School() { y++; }
    static int getY() { return y; }

};