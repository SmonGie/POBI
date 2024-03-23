#include <iostream>
#include "model/Client.h"
using namespace std;

int main(){

    // Utwórz obiekt klienta
    Client client1("", "", ""); // Tworzymy obiekt klienta z pustymi danymi

    // Ustawienie danych za pomocą setterów
    client1.setImie("Janek");
    client1.setNazwisko("Marczewski");
    client1.setPersonalId("133");

    // Wyświetlenie informacji o kliencie
    std::cout << client1.getInfo() << std::endl;

    return 0;

}
