#include <iostream>
#include "model/Client.h"
using namespace std;

int main(){

    // Utworzenie obiektu Address
    Address* address = new Address("Warszawa", "Marszałkowska", "123");

    // Utworzenie dwóch obiektów Client, oba współdzielą ten sam adres
    Client* client1 = new Client("Jan", "Kowalski", "1", address);
    Client* client2 = new Client("Anna", "Nowak", "2", address);

    // Pobranie wskaźnika Address z obiektu client1
    Address* sharedAddress = client1->getAddress();

    // Zmiana wartości pola w obiekcie współdzielonym
    sharedAddress->setCity("Krakow");

    // Wypisanie stanu obu obiektów Client
    cout << "Client 1 info: " << client1->getFullInfo() << endl;
    cout << "Client 2 info: " << client2->getFullInfo() << endl;

    // Zwolnienie pamięci
    delete client1;
    delete client2;
    delete address;

    return 0;

}
