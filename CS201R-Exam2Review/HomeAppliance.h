#include <iostream>
using namespace std;


class HomeAppliances {
protected:
    string appName;
    string appUse;

public:
    HomeAppliances(string n, string u) {
        appName = n;
        appUse = u;
    }
    void printDetails();
};
   
void HomeAppliances::printDetails() {
    cout << "\tAppliance Name : " << appName << endl;
    cout << "\tAppliance Use  : " << appUse << endl;
};

class MixerGrinder : public HomeAppliances {
private:
    double appPrice;
public:
    MixerGrinder(string n, string u, double p);
    void setPrice(double price) { appPrice = price; }
    void printDetails();
};

MixerGrinder::MixerGrinder(string n, string u, double p) : HomeAppliances(n,u) {
    appPrice = p;
}

void MixerGrinder::printDetails () {
    HomeAppliances::printDetails();
    cout << "\tAppliance Price: $" << appPrice << endl;
}