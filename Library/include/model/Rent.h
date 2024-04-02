//
// Created by student on 02.04.24.
//

#ifndef CARRENTAL_RENT_H
#define CARRENTAL_RENT_H

#include <iostream>
#include <model/Vehicle.h>

class Client;

class Rent {
private:
    int Id;
    Client* client;
    Vehicle* vehicle;
public:
    Rent(int Id, Client *client, Vehicle *vehicle);

    int getId() const;
    void setId(int Id);
    const Client* getClient()  { return client; }
    const Vehicle* getVehicle() { return vehicle; }

    string getInfo() const;
};

#endif //CARRENTAL_RENT_H
