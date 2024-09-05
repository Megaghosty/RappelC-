<<<<<<< HEAD
#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
using namespace std;

class Mission {
public:
    Mission();
    ~Mission();
    Mission(const Mission& miss);
    Mission& operator = (const Mission& miss);

    int GetNombredepersonne();
    void setNombredepersonne(int nb);

    std::string getDescription();
    void setDescription(const string& desc);

    int GetnbHeure();
    void setNbHeures(int nbHeures);

private:
    int nbPerssone;
    std::string descriptionMission;
    int nbHeure;
};

#endif
=======
#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission {
public:
    Mission();
    ~Mission();
    Mission(const Mission& miss);
    Mission& operator = (const Mission& miss);

    int GetNombredepersonne();
    void setNombredepersonne(int nb);

    std::string getDescription();
    void setDescription(const std::string& desc);

    int GetnbHeure();
    void setNbHeures(int nbHeures);

private:
    int nbPerssone;
    std::string descriptionMission;
    int nbHeure;
};

#endif
>>>>>>> e29a1c879b159941a2dd50674bb74750ffdd7dfb
