//
//  Cloud.hpp
//  TigerSand Cloud Solution
//
//  Created by Fredrik Tigerklo on 2017-10-04.
//  Copyright © 2017 Fredrik Tigerklo. All rights reserved.
//

#ifndef Cloud_hpp
#define Cloud_hpp

#include <stdio.h>
#pragma once
#include <vector>
#include "Units.hpp"


class Cloud
{
public:
    Cloud();
    ~Cloud();
    
    void AddUnit(Unit* newUnit);
    void RemoveUnit(int UnitID);
    void RemoveAllUnits();
    
protected:
    std::vector<Unit> m_CloudUnits;
};



#endif /* Cloud_hpp */
