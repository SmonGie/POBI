//
// Created by student on 23.03.24.
//

#ifndef POBI_CLIENT_H
#define POBI_CLIENT_H
#include <iostream>
#include <model/Address.h>
#include <vector>

class Rent;

using namespace std;

class Client {
private:
    vector<Rent*> currentRents;
    Address* address;
    string Imie;
    string Nazwisko;
    string PersonalID;
public:
    void setAddress(const string& city, const string& street, const string& number);

    virtual ~Client();

    Address *getAddress() const;

    Client(const std::string& imie, const std::string& nazwisko, const std::string& personalId, const string& city, const string& street, const string& number);
    Client(const std::string& imie, const std::string& nazwisko, const std::string& personalId, Address* address);
    string getInfo() const;
    string getFullInfo() const;

    const string &getImie() const;

    void setImie(const string& Imie);

    const string &getNazwisko() const;

    void setNazwisko(const string& Nazwisko);

    const string &getPersonalId() const;

    void setPersonalId(const string& PersonalId);

    const vector<Rent*>& getCurrentRents() const {
        return currentRents;
    }

    void addRent(Rent* rent) {
        currentRents.push_back(rent);
    }

};


#endif //POBI_CLIENT_H
