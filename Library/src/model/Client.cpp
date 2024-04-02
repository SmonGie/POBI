//
// Created by student on 23.03.24.
//

#include <utility>

#include "../../include/model/Client.h"
#include <model/Rent.h>

Client::Client(const std::string& imie, const std::string& nazwisko, const std::string& personalId, const string& city, const string& street, const string& number)
        : address(new Address(city, street, number)), Imie(std::move(imie)), Nazwisko(std::move(nazwisko)), PersonalID(std::move(personalId)) {}


const string &Client::getImie() const {
    return Imie;
}

void Client::setImie(const string& Imie) {
    if(Imie.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        this->Imie = Imie;
}

const string &Client::getNazwisko() const {
    return Nazwisko;
}

void Client::setNazwisko(const string& Nazwisko) {
    if(Nazwisko.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        this->Nazwisko = Nazwisko;
}

const string &Client::getPersonalId() const {
    return PersonalID;
}

void Client::setPersonalId(const string& PersonalId) {
    if(PersonalId.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        this->PersonalID = PersonalId;
}

string Client::getInfo() const {
    return("Imie: " + Imie +" Nazwisko: " + Nazwisko +" Personal ID: " + PersonalID +" Miasto: " + address->getCity() + " Ulica: " + address->getStreet() + " Numer domu: " + address->getNumber());
}


string Client::getFullInfo() const {
    string fullInfo = getInfo() + "\nCurrent rents:\n";
    for (const auto &rent: currentRents)
        fullInfo += rent->getInfo() + "\n";

    return fullInfo;
}

void Client::setAddress(const string& city, const string& street, const string& number) {
    if (city.empty() || street.empty() || number.empty())
        cout << "Blad w ustawianiu adresu, poniewaz jeden ze skladnikow jest pusty" << endl;
    else{
        Client::address->setCity(city);
        Client::address->setStreet(street);
        Client::address->setNumber(number);
    }
}

Client::Client(const string& imie, const string& nazwisko, const string& personalId, Address* address)
        : address(address), Imie(imie), Nazwisko(nazwisko), PersonalID(personalId) {}



Address *Client::getAddress() const {
    return address;
}

Client::~Client() {}
