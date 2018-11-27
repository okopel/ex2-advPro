//
// Created by okopel on 11/27/18.
//

#ifndef EX2_MYPLANE_H
#define EX2_MYPLANE_H

#include "MyImplementation.h"

class myPlane : virtual public Plane {
    int model;
    int maxFirstClass;
    int maxSecondClass;
    map<Jobs, int> neededCrew;
    string id;
public:
    myPlane(int model, int maxFirstClass, int maxSecondClass, map<Jobs, int> &neededCrew, AllId *company);

    myPlane(const string &id, int model, int maxFirstClass, int maxSecondClass, map<Jobs, int> &neededCrew);

    string getID() override;

    int getModelNumber() override;

    map<Jobs, int> getCrewNeeded() override;

    int getMaxFirstClass() override;

    int getMaxEconomyClass() override;

    ~myPlane() override;
};

#endif //EX2_MYPLANE_H