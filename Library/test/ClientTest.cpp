#include <boost/test/unit_test.hpp>
#include <model/Client.h>

namespace btt = boost::test_tools;

struct ClientFixture {
    string imie;
    string nazwisko;
    string id;
    string miasto;
    string ulica;
    string numerulicy;
    Client client;

    ClientFixture()
            : imie("Janek"),
              nazwisko("Kolodziejczyk"),
              id("243"),
              miasto("Lodz"),
              ulica("Wolczanska"),
              numerulicy("243"),
              client(imie, nazwisko, id, miasto, ulica, numerulicy) {}
};

BOOST_AUTO_TEST_SUITE(TestSuiteClient)

    BOOST_FIXTURE_TEST_CASE(Gettery, ClientFixture) {
        BOOST_TEST(client.getAddress()->getCity() == miasto);
        BOOST_TEST(client.getAddress()->getStreet() == ulica);
        BOOST_TEST(client.getAddress()->getNumber() == numerulicy);
        BOOST_TEST(client.getImie() == imie);
        BOOST_TEST(client.getNazwisko() == nazwisko);
        BOOST_TEST(client.getPersonalId() == id);
    }

    BOOST_FIXTURE_TEST_CASE(SetteryDobrze, ClientFixture) {
        string noweimie = "Mirek";
        string nowenazwisko = "Frankowski";
        string noweid = "420";
        client.setImie(noweimie);
        client.setNazwisko(nowenazwisko);
        client.setPersonalId(noweid);
        client.setAddress("Mikolajow", "59", "33");
        BOOST_TEST(client.getImie() == noweimie);
        BOOST_TEST(client.getNazwisko() == nowenazwisko);
        BOOST_TEST(client.getPersonalId() == noweid);
        BOOST_TEST(client.getAddress()->getCity() == "Mikolajow");
        BOOST_TEST(client.getAddress()->getStreet() == "59");
        BOOST_TEST(client.getAddress()->getNumber() == "33");
    }

    BOOST_FIXTURE_TEST_CASE(SetteryBlad, ClientFixture) {
        string noweimie;
        string nowenazwisko;
        string noweid;
        string nowemiasto;
        string nowaulica;
        string nowynumerulicy;
        client.setImie(noweimie);
        client.setNazwisko(nowenazwisko);
        client.setPersonalId(noweid);
        client.setAddress(nowemiasto, nowaulica, nowynumerulicy);
        BOOST_TEST(client.getImie() == imie);
        BOOST_TEST(client.getNazwisko() == nazwisko);
        BOOST_TEST(client.getPersonalId() == id);
        BOOST_TEST(client.getAddress()->getCity() == miasto);
        BOOST_TEST(client.getAddress()->getStreet() == ulica);
        BOOST_TEST(client.getAddress()->getNumber() == numerulicy);
    }

BOOST_AUTO_TEST_SUITE_END()
