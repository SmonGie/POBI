//
// Created by student on 23.03.24.
//

#include "../../include/model/Client.h"

Client::Client(const string &imie, const string &nazwisko, const string &personalId) : Imie(imie), Nazwisko(nazwisko),
                                                                                       PersonalID(personalId) {}

const string &Client::getImie() const {
    return Imie;
}

void Client::setImie(const string &imie) {
    Imie = imie;
}

const string &Client::getNazwisko() const {
    return Nazwisko;
}

void Client::setNazwisko(const string &nazwisko) {
    Nazwisko = nazwisko;
}

const string &Client::getPersonalId() const {
    return PersonalID;
}

void Client::setPersonalId(const string &personalId) {
    PersonalID = personalId;
}

string Client::getInfo()
{
    return("Imie: " + Imie + " " + "Nazwisko: " + Nazwisko + " " + "Personal ID: " + PersonalID);
}
