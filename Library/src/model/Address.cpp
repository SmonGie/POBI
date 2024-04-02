//
// Created by student on 01.04.24.
//

#include "model/Address.h"

Address::~Address() = default;

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
    if (city.empty())
        cout <<"Blad w ustawianiu miasta" << endl;
    else
        this->city = city;
}

const string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const string &street) {
    if (street.empty())
        cout <<"Blad w ustawianiu ulicy" << endl;
    else
        this->street = street;
}

const string &Address::getNumber() const {
    return number;
}

void Address::setNumber(const string &number) {
    if (number.empty())
        cout << "Blad w ustawianiu numeru domu" << endl;
    else
        this->number = number;
}
