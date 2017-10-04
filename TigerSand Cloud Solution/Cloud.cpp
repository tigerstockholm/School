//
//  Cloud.cpp
//  TigerSand Cloud Solution
//
//  Created by Fredrik Tigerklo on 2017-10-04.
//  Copyright © 2017 Fredrik Tigerklo. All rights reserved.
//

#include "Cloud.hpp"
#include <vector>
#include <iostream>


Cloud::Cloud()
{
}

Cloud::~Cloud()
{
}

void Cloud::AddUnit(Unit* newUnit) {
    m_CloudUnits.push_back(newUnit);
}

void Cloud::RemoveUnit(int unitID) {
    m_CloudUnits.at(m_CLoudUnits.begin() +(unitID -1));
}

void Cloud::RemoveAllUnits() {
    m_CloudUnits.clear();
}
