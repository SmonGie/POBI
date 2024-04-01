//
// Created by student on 01.04.24.
//
#include <boost/test/unit_test.hpp>
#include <model/Address.h>
#include <iostream>

using namespace std;

BOOST_AUTO_TEST_SUITE(TestSuiteAddress)
    BOOST_AUTO_TEST_CASE(Constructor)
    {
        Address address("adres","ulica","23");
    }
BOOST_AUTO_TEST_SUITE_END()
