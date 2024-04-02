//
// Created by student on 02.04.24.
//

#include "model/Rent.h"
#include <model/Client.h>
#include <model/Vehicle.h>
#include <iostream>

using namespace std;

string Rent::getInfo() const
{
    return "Rent ID: " + to_string(Id) + "\n" +
           "Client: " + client->getInfo() + "\n" +
           "Vehicle: " + vehicle->getInfo();
}

Rent::Rent(int Id, Client *client, Vehicle *vehicle) : Id(Id), client(client), vehicle(vehicle) {
    client->addRent(this);
    vehicle->setRented(true);
}

int Rent::getId() const
{
    return Id;
}
void Rent::setId(int Id) {
    if (Id > 0) {
        this->Id = Id;
    } else {
        cout << "Id musi byc liczba calkowita nie ujemna" << std::endl;
    }
}