//
// Created by student on 01.04.24.
//

#include "model/Address.h"

Address::~Address() {

}

Address::Address(const string &city, const string &street, const string &number) : city(city), street(street),
                                                                                   number(number) {}
string Address::getInfo()
{
    return("Miasto: " + city + " " + "Ulica: " + street + " " + "Numer domu: " + number);
}

const string &Address::getCity() const {
    return city;
}

void Address::setCity(const string &city) {
    Address::city = city;
}

const string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const string &street) {
    Address::street = street;
}

const string &Address::getNumber() const {
    return number;
}

void Address::setNumber(const string &number) {
    Address::number = number;
}
