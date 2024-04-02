//
// Created by student on 02.04.24.
//

#ifndef CARRENTAL_VEHICLE_H
#define CARRENTAL_VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle {
private:
    bool Rented;
    int basePrice;
    string plateNumber;
public:
    Vehicle(const string &plateNumber,int basePrice);

    int getBasePrice() const;

    void setBasePrice(int basePrice);

    const string &getPlateNumber() const;

    void setPlateNumber(const string &plateNumber);

    string getInfo() const;

    bool isRented() const;

    void setRented(bool Rented);

};


#endif //CARRENTAL_VEHICLE_H
