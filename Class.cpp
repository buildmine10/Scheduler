//
// Created by Collin on 10/27/2021.
//

#include "Class.h"
#include <algorithm>

Class::Class(std::string name, std::set<std::string> prereqs, std::set<std::string> coreqs) {
    this->name = name;
    this->prereqs.addRequirements(prereqs);
    this->coreqs.addRequirements(coreqs);
}

bool Class::isAllowedToBeTaken(std::set<std::string> takenClasses, std::set<std::string> currentClasses) const{
    bool prereqsMet = prereqs.isSatisfied(takenClasses);
    std::set<std::string> allClasses;
    std::set_union(takenClasses.begin(), takenClasses.end(),
                   currentClasses.begin(), currentClasses.end(),
                   std::inserter(allClasses, allClasses.begin()));
    bool coreqsMet = coreqs.isSatisfied(allClasses);
    return prereqsMet && coreqsMet;
}

bool Class::operator<(const Class &other) const{
    return this->name < other.name;
}

std::string Class::getName() const {
    return name;
}
