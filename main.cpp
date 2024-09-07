/*****************************************************************//**
 * \file   main.cpp
 * \brief Assignation de mission � une entreprise
 *
 * \author Megaghosty
 * \date   Septembre 2024
 *********************************************************************/


#include <iostream>
#include "Entreprise.h"
#include "mission.h"

int main() {

    Entreprise entreprise("NASA", "Cap canaveral");


    Mission objectif;
    objectif.setDescription("Make a rocketship");
    objectif.setNombredepersonne(20000);
    objectif.setNbHeures(140400);


    entreprise.assignMission(objectif);

        entreprise.printMissionDetails();

    return 0;
}

