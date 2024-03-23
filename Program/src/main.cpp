#include <iostream>
#include "model/Client.h"
using namespace std;

int main(){

    // Utwórz obiekt klienta
    Client client1("", "", ""); // Tworzymy obiekt klienta z pustymi danymi
    Client *client2 = new Client("Marek","Otwocki","233");
    // Ustawienie danych za pomocą setterów
    client1.setImie("Janek");
    client1.setNazwisko("Marczewski");
    client1.setPersonalId("133");

    client2->setImie("Maro");
    client2->setNazwisko("Marczeski");
    client2->setPersonalId("234");

    // Wyświetlenie informacji o kliencie
    cout << client1.getInfo() << endl;
    cout << client2->getInfo() << endl;

    delete client2;

    return 0;

}
