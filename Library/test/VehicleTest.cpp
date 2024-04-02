#include <boost/test/unit_test.hpp>
#include "model/Vehicle.h"

struct VehicleFixture {
    string plateNumber;
    int basePrice;
    Vehicle vehicle;

    VehicleFixture()
            : plateNumber("XYZ123"),
              basePrice(100),
              vehicle(plateNumber, basePrice) {}
};

BOOST_AUTO_TEST_SUITE(TestSuiteVehicle)

    BOOST_FIXTURE_TEST_CASE(DefaultConstruction, VehicleFixture) {
        BOOST_TEST(vehicle.getPlateNumber() == plateNumber);
        BOOST_TEST(vehicle.getBasePrice() == basePrice);
        BOOST_TEST(vehicle.isRented() == false); // Domyślnie pojazd nie jest wypożyczony
    }

    BOOST_FIXTURE_TEST_CASE(SetRented, VehicleFixture) {
        vehicle.setRented(true);
        BOOST_TEST(vehicle.isRented() == true); // Po ustawieniu pojazd jest wypożyczony
    }

    BOOST_FIXTURE_TEST_CASE(InvalidBasePrice, VehicleFixture) {
        Vehicle vehicle("", -30); // Próba ustawienia ujemnej ceny bazowej
        BOOST_TEST(vehicle.getBasePrice() == 0); // Oczekujemy, że cena zostanie ustawiona na 0
    }

    BOOST_FIXTURE_TEST_CASE(EmptyPlateNumber, VehicleFixture) {
        Vehicle vehicle("", 50); // Próba ustawienia pustego numeru rejestracyjnego
        BOOST_TEST(vehicle.getPlateNumber().empty()); // Oczekujemy, że numer rejestracyjny będzie pusty
    }

BOOST_AUTO_TEST_SUITE_END()
