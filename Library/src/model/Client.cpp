//
// Created by student on 23.03.24.
//

#include <utility>

#include "../../include/model/Client.h"

Client::Client(string imie, string nazwisko, string personalId) : Imie(std::move(imie)), Nazwisko(std::move(nazwisko)),
                                                                                       PersonalID(std::move(personalId)) {}

const string &Client::getImie() const {
    return Imie;
}

void Client::setImie(const string& noweImie) {
    if(noweImie.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        Imie = noweImie;
}

const string &Client::getNazwisko() const {
    return Nazwisko;
}

void Client::setNazwisko(const string& noweNazwisko) {
    if(noweNazwisko.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        Nazwisko = noweNazwisko;
}

const string &Client::getPersonalId() const {
    return PersonalID;
}

void Client::setPersonalId(const string& nowePersonalId) {
    if(nowePersonalId.empty())
        cout << "Zmiania nie zadzialala" << endl;
    else
        PersonalID = nowePersonalId;
}

string Client::getInfo()
{
    return("Imie: " + Imie + " " + "Nazwisko: " + Nazwisko + " " + "Personal ID: " + PersonalID);
}
