#include <boost/test/unit_test.hpp>
#include <model/Client.h>
namespace btt = boost::test_tools;

BOOST_AUTO_TEST_SUITE(TestSuiteClient)

    BOOST_AUTO_TEST_CASE(AssertionsTests) {
        BOOST_TEST(1.0/3.0==0.333, btt::tolerance(0.033));
    }
    BOOST_AUTO_TEST_CASE(Gettery)
    {
        string imie = "Janero";
        string nazwisko = "Kolodziejczykiewski";
        string id = "2433";
        Client client1(imie,nazwisko,id);
        BOOST_TEST(client1.getImie()==imie);
        BOOST_TEST(client1.getNazwisko()==nazwisko);
        BOOST_TEST(client1.getPersonalId()==id);

    }
    BOOST_AUTO_TEST_CASE(SetteryDobrze){
        string noweimie = "Mirek";
        string nowenazwisko = "Frankowski";
        string noweid = "420";
        Client client1("Janek","Kolodziejczyk","243");
        client1.setImie(noweimie);
        client1.setNazwisko(nowenazwisko);
        client1.setPersonalId(noweid);
        BOOST_TEST(client1.getImie()==noweimie);
        BOOST_TEST(client1.getNazwisko()==nowenazwisko);
        BOOST_TEST(client1.getPersonalId()==noweid);
    }

    BOOST_AUTO_TEST_CASE(SetteryBlad){
        string imie = "Janek";
        string nazwisko = "Kolodziejczyk";
        string id = "243";
        string noweimie = "";
        string nowenazwisko = "";
        string noweid = "";
        Client client1(imie,nazwisko,id);
        client1.setImie(noweimie);
        client1.setNazwisko(nowenazwisko);
        client1.setPersonalId(noweid);
        BOOST_TEST(client1.getImie()==imie);
        BOOST_TEST(client1.getNazwisko()==nazwisko);
        BOOST_TEST(client1.getPersonalId()==id);
    }

BOOST_AUTO_TEST_SUITE_END()