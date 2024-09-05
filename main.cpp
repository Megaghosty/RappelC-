<<<<<<< HEAD
#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {
    
    Entreprise e1("TechCorp", "Paris");

    
    Mission mission1;
    mission1.setDescription("Develop new software platform");
    mission1.setNombredepersonne(20);
    mission1.setNbHeures(400);

    
    e1.assignMission(mission1);

    
    e1.printMissionDetails();

    return 0;
}
=======
#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {
    
    Entreprise e1("TechCorp", "Paris");

    
    Mission mission1;
    mission1.setDescription("Develop new software platform");
    mission1.setNombredepersonne(20);
    mission1.setNbHeures(400);

    
    e1.assignMission(mission1);

    
    e1.printMissionDetails();

    return 0;
}
>>>>>>> e29a1c879b159941a2dd50674bb74750ffdd7dfb
