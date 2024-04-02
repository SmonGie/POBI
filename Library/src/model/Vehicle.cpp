//
// Created by student on 02.04.24.
//

#include "model/Vehicle.h"

int Vehicle::getBasePrice() const {
    return basePrice;
}

void Vehicle::setBasePrice(int basePrice) {
    if (basePrice >= 0) {
        this->basePrice = basePrice;
    } else {
        cout << "Cena nie moze byc ujemna" << std::endl;
    }
}

const string &Vehicle::getPlateNumber() const {
    return plateNumber;
}

void Vehicle::setPlateNumber(const string &plateNumber) {
    if(plateNumber.empty())
        cout << "Numer rejestracyjny nie moze byc pusty" << endl;
    else
        this->plateNumber = plateNumber;
}

    string Vehicle::getInfo() const {
    return "Numer rejestracyjny: " + plateNumber + ", Cena bazowa: " + std::to_string(basePrice);
}

Vehicle::Vehicle(const string &plateNumber,int basePrice) : plateNumber(plateNumber), basePrice(basePrice), Rented(false){
    if (basePrice < 0) {
        this->basePrice = 0;
    }
}

void Vehicle::setRented(bool rented) {
    Rented = rented;
}

bool Vehicle::isRented() const {
    return Rented;
}