//
// Created by student on 01.04.24.
//

#ifndef CARRENTAL_ADDRESS_H
#define CARRENTAL_ADDRESS_H
#include <iostream>

using namespace std;

class Address {
private:
    string city;
    string street;
    string number;
public:
    const string &getCity() const;

    void setCity(const string &city);

    const string &getStreet() const;

    void setStreet(const string &street);

    const string &getNumber() const;

    void setNumber(const string &number);

    Address(const string &city, const string &street, const string &number);
    string getInfo();

    virtual ~Address();
};


#endif //CARRENTAL_ADDRESS_H
