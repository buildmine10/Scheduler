//
// Created by Collin on 10/27/2021.
//

#ifndef SCHEDULER_REQUIREMENTS_H
#define SCHEDULER_REQUIREMENTS_H
#include <vector>
#include <string>
#include <set>


class Requirements {
private:
    std::set<std::string> names;

public:
    bool isSatisfied(const std::set<std::string>& classNames) const;//true if class names includes all of names

    void addRequirements(std::set<std::string> reqs);
    void addRequirements(std::vector<std::string> reqs);
};


#endif //SCHEDULER_REQUIREMENTS_H
