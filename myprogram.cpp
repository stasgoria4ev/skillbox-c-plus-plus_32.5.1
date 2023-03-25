//#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include "nlohmann/json.hpp"

struct Record {
    std::string country;
    int creationFilm;
    std::string filmingStudio;
    std::string screenWriters[7];
    std::string directors[2];
    std::string producer[9];
    std::map<std::string, std::string> mainRoles;
};

int main() {
    Record record;
    record.country = "USA";
    record.creationFilm = 2022;
    record.filmingStudio = "Apple TV+";

    record.screenWriters[0] = "Anna Ouyang Moench";
    record.screenWriters[1] = "Wei-Ning Yu";
    record.screenWriters[2] = "Chris Black";
    record.screenWriters[3] = "Andrew Colville";
    record.screenWriters[4] = "Kari Drake";
    record.screenWriters[5] = "Anna Ouyang Moench";
    record.screenWriters[6] = "Helen Leigh";

    record.directors[0] = "Ben Stiller";
    record.directors[1] = "Aoife McArdle";

    record.producer[0] = "Caroline Baron";
    record.producer[1] = "Mohamad el Masri";
    record.producer[2] = "John Cameron";
    record.producer[3] = "Jackie Cohn";
    record.producer[4] = "Dan Erickson";
    record.producer[5] = "Jill Footlick";
    record.producer[6] = "Paul Leonardo Jr.";
    record.producer[7] = "Aoife McArdle";
    record.producer[8] = "Nicholas Weinstock";

    record.mainRoles["Mark"] = "Adam Scott";
    record.mainRoles["Dylan"] = "Zach Cherry";
    record.mainRoles["Helly"] = "Brittney Lower";
    record.mainRoles["Milchick"] = "Tramell Tillman";
    record.mainRoles["Devon"] = "Jen Tullock";
    record.mainRoles["Ms. Casey"] = "Dichen Lachman";
    record.mainRoles["Ricken"] = "Michael Chernus";
    record.mainRoles["Irving"] = "John Turturro";
    record.mainRoles["Burt"] = "Christopher Walken";
    record.mainRoles["Harmony Cobel"] = "Patricia Arquette";

    std::ofstream file("record.json");

    nlohmann::json dict = {
            {"country", record.country},
            {"creationFilm", record.creationFilm},
            {"filmingStudio", record.filmingStudio},
            {"screenwriters", record.screenWriters},
            {"directors", record.directors},
            {"producer", record.producer},
            {"mainRoles", record.mainRoles},
    };
    file << dict;
}