//
// Created by student on 23.03.24.
//

#ifndef POBI_CLIENT_H
#define POBI_CLIENT_H
#include <iostream>

using namespace std;

class Client {
public:
    Client(string imie, string nazwisko, string personalId);

    string getInfo();

    const string &getImie() const;

    void setImie(const string& noweImie);

    const string &getNazwisko() const;

    void setNazwisko(const string& noweNazwisko);

    const string &getPersonalId() const;

    void setPersonalId(const string& nowePersonalId);

private:
    string Imie;
    string Nazwisko;
    string PersonalID;

};


#endif //POBI_CLIENT_H
