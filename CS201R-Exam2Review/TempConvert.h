#pragma once

class TempConvert {
private:
    int temp;
public:
    TempConvert() {
        temp = 1;
    }
    void setTemp(int tempVal) {
        temp = tempVal;
    }
    int getTemp() const {
        return temp;
    }
    int inFahrenheit() {
        return (temp * 1.8) - 32;
    }

};