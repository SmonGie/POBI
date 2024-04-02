//
// Created by student on 23.03.24.
//

#ifndef POBI_CLIENT_H
#define POBI_CLIENT_H
#include <iostream>
#include <model/Address.h>
using namespace std;

class Client {
public:
    void setAddress(const string& city, const string& street, const string& number);

    virtual ~Client();

    Address *getAddress() const;

    Client(const std::string& imie, const std::string& nazwisko, const std::string& personalId, const string& city, const string& street, const string& number);
    Client(const std::string& imie, const std::string& nazwisko, const std::string& personalId, Address* address);
    string getInfo();
    string getFullInfo();

    const string &getImie() const;

    void setImie(const string& noweImie);

    const string &getNazwisko() const;

    void setNazwisko(const string& noweNazwisko);

    const string &getPersonalId() const;

    void setPersonalId(const string& nowePersonalId);

private:
    Address* address;
    string Imie;
    string Nazwisko;
    string PersonalID;

};


#endif //POBI_CLIENT_H
