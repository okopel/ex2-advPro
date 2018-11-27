/**************************
 * Ori kopel
 * 205533151
 * okopel@gmail.com
 * ex2
 * nov 2018
 **************************/

#ifndef EX2_EX2_H
#define EX2_EX2_H
#define EMP_FILE "Employee.txt"
#define CUS_FILE "Custemer.txt"
#define PLAN_FILE "Plans.txt"
#define RES_FILE "Reservation.txt"


#include "interface.h"
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>


class MyImplementation;

class myID;

class AllId;

class MyDate;

class ResTable;

class EmploeeTable;

class PlaneTable;

class flightTable;

class AllId {
    int mangers;
    int navigators;
    int fly_attendant;
    int pilots;
    int other;
public:
    explicit AllId(int managers = 0, int navigators = 0, int fly_attendant = 0, int pilots = 0, int other = 0);

    string generate(Jobs type);

    int getCount(Jobs type);
};


class MyImplementation : virtual public Ex2 {
    AllId *company;
    list<Employee *> employees;
    list<Plane *> planes;
    list<Flight *> flight;
    list<Customer *> customer;
    list<Reservation *> reservs;

    bool checkForCrew(int model, Date date);

    bool checkAvailiblePlanAndCrew(Date date, int model);

    Plane *getPlaneByModel(int model);

    map<Jobs, int> existing();
public:
    explicit MyImplementation();


    unsigned long getResPerDatePerModel(Date date, int model);

    int numOfPlanesFromModel(const int model) const;

    list<Employee *> &getEemployees();

    list<Plane *> &getPlanes();

    list<Flight *> &getFlight();

    list<Customer *> &getCustomer();

    list<Reservation *> &getReservs();;

    Employee *addEmployee(int seniority, int birth_year, string employer_id, Jobs title) override;

    Employee *getEmployee(const string id) override;

    Plane *addPlane(int model_number, map<Jobs, int> crew_needed, map<Classes, int> max_passangers) override;

    Plane *getPlane(string id) override;

    Flight *addFlight(int model_number, Date date, string source, string destination) override;

    Flight *getFlight(string id) override;

    Customer *addCustomer(string full_name, int priority) override;

    Customer *getCustomer(string id) override;

    Reservation *addResevation(string customerId, string flightId, Classes cls, int max_baggage) override;

    Reservation *getReservation(string id) override;

    void exit() override;

    ~MyImplementation() override;
};

#endif //EX2_EX2_H
