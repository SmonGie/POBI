#include <boost/test/unit_test.hpp>
#include <model/Client.h>
namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(TestSuiteClient)

    BOOST_AUTO_TEST_CASE(AssertionsTests) {
        BOOST_TEST(1.0/3.0==0.333, btt::tolerance(0.033));
    }
    BOOST_AUTO_TEST_CASE(Gettery)
    {
        Client client1("Maciek","Rosevelt","133");
        BOOST_TEST(client1.getImie()=="Maciek");

    }
    BOOST_AUTO_TEST_CASE(SetteryDobrze){
    }

    BOOST_AUTO_TEST_CASE(SetteryBlad){

        Client client1("Janek","Kolodziejczyk","243");
        string nowenazwisko = "Franek";
        client1.setImie(nowenazwisko);
        BOOST_TEST(client1.getImie()==nowenazwisko);
    }

BOOST_AUTO_TEST_SUITE_END()