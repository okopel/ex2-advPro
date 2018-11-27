//
// Created by okopel on 11/27/18.
//

#ifndef EX2_MYEMPLOYEE_H
#define EX2_MYEMPLOYEE_H

#include "MyImplementation.h"


class MyEmployee : virtual public Employee {
    Jobs type;
    string id;
    int seniority;
    int birthYead;
    Employee *employer;
public:
    explicit MyEmployee(Jobs type, int seniority, int birthYear, Employee *employee, AllId *company);

    explicit MyEmployee(const string &ID, Jobs type, int seniority, int birthYear, Employee *employee);

    int getSeniority() override;

    int getBirthYear() override;

    Jobs getTitle() override;

    string getID() override;

    string toString();

    Employee *getEmployer() override;

    ostream &operator<<(ostream &os) {
        return os << this->toString();
    }
};

#endif //EX2_MYEMPLOYEE_H
