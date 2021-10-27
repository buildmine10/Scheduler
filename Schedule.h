//
// Created by Collin on 10/27/2021.
//

#ifndef SCHEDULER_SCHEDULE_H
#define SCHEDULER_SCHEDULE_H

#include <vector>
#include <set>

#include "Class.h"

class Schedule {
private:
    std::set<Class> takenClasses;
    std::set<Class> takingClasses;
public:

    void addClass(const Class& newClass);
    void addClasses(std::set<Class> newClasses);
    void nextSemester();
    void addPassedClasses(std::set<Class> classes);

    bool checkValid();
    void printValidity();

};


#endif //SCHEDULER_SCHEDULE_H
