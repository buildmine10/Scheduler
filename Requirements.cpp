//
// Created by Collin on 10/27/2021.
//

#include "Requirements.h"
#include <algorithm>

bool Requirements::isSatisfied(const std::set<std::string>& classNames) const{
    return std::includes(classNames.begin(), classNames.end(), names.begin(), names.end());
}

void Requirements::addRequirements(std::set<std::string> reqs) {
    names.insert(reqs.begin(), reqs.end());
}

void Requirements::addRequirements(std::vector<std::string> reqs) {
    names.insert(reqs.begin(), reqs.end());
}
