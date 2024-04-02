#include <boost/test/unit_test.hpp>
#include <model/Address.h>
#include <iostream>

using namespace std;
namespace btt = boost::test_tools;

struct AddressFixture {
    string city;
    string street;
    string number;
    Address address;

    AddressFixture()
            : city("Lodz"),
              street("Wolczanska"),
              number("243"),
              address(city, street, number) {}
};

BOOST_AUTO_TEST_SUITE(TestSuiteAddress)

    BOOST_FIXTURE_TEST_CASE(Gettery, AddressFixture) {
        BOOST_TEST(address.getCity() == city);
        BOOST_TEST(address.getStreet() == street);
        BOOST_TEST(address.getNumber() == number);
    }

    BOOST_FIXTURE_TEST_CASE(SetteryDobrze, AddressFixture) {
        string newCity = "Mikolajow";
        string newStreet = "59";
        string newNumber = "33";
        address.setCity(newCity);
        address.setStreet(newStreet);
        address.setNumber(newNumber);
        BOOST_TEST(address.getCity() == newCity);
        BOOST_TEST(address.getStreet() == newStreet);
        BOOST_TEST(address.getNumber() == newNumber);
    }

    BOOST_FIXTURE_TEST_CASE(SetteryBlad, AddressFixture) {
        string newCity;
        string newStreet;
        string newNumber;
        address.setCity(newCity);
        address.setStreet(newStreet);
        address.setNumber(newNumber);
        BOOST_TEST(address.getCity() == city);
        BOOST_TEST(address.getStreet() == street);
        BOOST_TEST(address.getNumber() == number);
    }

BOOST_AUTO_TEST_SUITE_END()
