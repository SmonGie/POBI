//
// Created by student on 02.04.24.
//
#include <boost/test/unit_test.hpp>
#include "model/Client.h"
#include "model/Vehicle.h"
#include "model/Rent.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(TestSuiteRent)

    BOOST_AUTO_TEST_CASE(AddRentToClient) {

        Client client("John", "Doe", "123", "New York", "Main St", "123");

        Vehicle vehicle("ABC",30);
        vehicle.setPlateNumber("ABC123");
        vehicle.setBasePrice(50);
        cout << client.getCurrentRents().size();
        Rent rent(1, &client, &vehicle);

        BOOST_TEST(client.getCurrentRents().size() == 1);
        BOOST_TEST(client.getCurrentRents()[0] == &rent);
    }

BOOST_AUTO_TEST_SUITE_END()
