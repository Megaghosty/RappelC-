<<<<<<< HEAD
#include "mission.h"
#include <iostream>
using namespace std;

Mission::Mission() : nbPerssone(0), descriptionMission(""), nbHeure(0) {}

Mission::~Mission() {}


Mission::Mission(const Mission& miss)
    : nbPerssone(miss.nbPerssone), descriptionMission(miss.descriptionMission), nbHeure(miss.nbHeure) {}


Mission& Mission::operator=(const Mission& miss) {
    if (this != &miss) {
        this->nbPerssone = miss.nbPerssone;
        this->descriptionMission = miss.descriptionMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}


int Mission::GetNombredepersonne() {
    return nbPerssone;
}

void Mission::setNombredepersonne(int nb) {
    this->nbPerssone = nb;
}


std::string Mission::getDescription() {
    return descriptionMission;
}

void Mission::setDescription(const string& desc) {
    this->descriptionMission = desc;
}


int Mission::GetnbHeure() {
    return nbHeure;
}

void Mission::setNbHeures(int nbHeures) {
    this->nbHeure = nbHeures;
}
=======
#include "mission.h"
#include <iostream>


Mission::Mission() : nbPerssone(0), descriptionMission(""), nbHeure(0) {}

Mission::~Mission() {}


Mission::Mission(const Mission& miss)
    : nbPerssone(miss.nbPerssone), descriptionMission(miss.descriptionMission), nbHeure(miss.nbHeure) {}


Mission& Mission::operator=(const Mission& miss) {
    if (this != &miss) {
        this->nbPerssone = miss.nbPerssone;
        this->descriptionMission = miss.descriptionMission;
        this->nbHeure = miss.nbHeure;
    }
    return *this;
}


int Mission::GetNombredepersonne() {
    return nbPerssone;
}

void Mission::setNombredepersonne(int nb) {
    this->nbPerssone = nb;
}


std::string Mission::getDescription() {
    return descriptionMission;
}

void Mission::setDescription(const std::string& desc) {
    this->descriptionMission = desc;
}


int Mission::GetnbHeure() {
    return nbHeure;
}

void Mission::setNbHeures(int nbHeures) {
    this->nbHeure = nbHeures;
}
>>>>>>> e29a1c879b159941a2dd50674bb74750ffdd7dfb
