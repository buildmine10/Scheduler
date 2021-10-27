//
// Created by Collin on 10/27/2021.
//

#include "Schedule.h"
#include <iostream>

void Schedule::addClass(const Class& newClass) {
    takingClasses.insert(newClass);
}

bool Schedule::checkValid() {
    std::set<std::string> takenClassesNames;
    std::set<std::string> takingClassesNames;


    for(const Class& temp : takenClasses){
        takenClassesNames.insert(temp.getName());
    }
    for(const Class& temp : takingClasses){
        takingClassesNames.insert(temp.getName());
    }

    for(const Class& temp : takingClasses){
        if(!temp.isAllowedToBeTaken(takenClassesNames, takingClassesNames)){
            return false;
        }
    }

    return true;
}

void Schedule::nextSemester() {
    takenClasses.insert(takingClasses.begin(), takingClasses.end());
    takingClasses.clear();
}

void Schedule::addPassedClasses(std::set<Class> classes) {
    takenClasses.insert(classes.begin(), classes.end());
}

void Schedule::addClasses(std::set<Class> newClasses) {
    takingClasses.insert(newClasses.begin(), newClasses.end());
}

void Schedule::printValidity() {
    std::cout << std::boolalpha << checkValid() << std::endl;
}
