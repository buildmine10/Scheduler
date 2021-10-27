//
// Created by Collin on 10/27/2021.
//

#ifndef SCHEDULER_CLASS_H
#define SCHEDULER_CLASS_H

#include <string>
#include <vector>
#include <set>
#include "Requirements.h"

class Class {
private:
    std::string name;
    Requirements prereqs;
    Requirements coreqs;

public:

    Class(std::string name, std::set<std::string> prereqs, std::set<std::string> coreqs);

    bool isAllowedToBeTaken(std::set<std::string> takenClasses, std::set<std::string> currentClasses) const;

    bool operator<(const Class& other) const;

    std::string getName() const;
};


#endif //SCHEDULER_CLASS_H
