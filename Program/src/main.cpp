#include <iostream>
#include "model/Client.h"
#include "model/Vehicle.h"
#include "model/Rent.h"

using namespace std;

int main(){

    Client client("John", "Doe", "123", "New York", "Main St", "123");

    // Utwórz obiekt Vehicle
    Vehicle vehicle("ABC", 30);
    vehicle.setPlateNumber("ABC123");
    vehicle.setBasePrice(50);

    // Utwórz obiekt Rent wiążący powyższe obiekty
    Rent rent(1, &client, &vehicle);

    // Wyświetl wynik wywołania metody getInfo() na obiekcie Rent
    cout << "Rent info:\n" << rent.getInfo() << endl <<endl;

    // Wyświetl wynik wywołania metody getFullInfo() na obiekcie Client
    cout << "Client full info:\n" << client.getFullInfo() << endl <<endl;

    return 0;

}
