/*****************************************************************//**
 * \file   main.cpp
 * \brief Assignation de mission à une entreprise
 *
 * \author Megaghosty
 * \date   Septembre 2024
 *********************************************************************/


#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {

    Entreprise id("NASA", "Cap canaveral");


    Mission mission1;
    mission1.setDescription("Make a rocketship");
    mission1.setNombredepersonne(20000);
    mission1.setNbHeures(140400);


    id.assignMission(mission1);

        id.printMissionDetails();

    return 0;
}

