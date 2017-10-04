//
//  Units.hpp
//  TigerSand Cloud Solution
//
//  Created by Fredrik Tigerklo on 2017-10-04.
//  Copyright © 2017 Fredrik Tigerklo. All rights reserved.
//

#ifndef Units_hpp
#define Units_hpp

#include <stdio.h>
#include <iostream>
#include <vector>


class Unit{
    
public:
    Unit(std::string, std::string, bool, int);

    
    std::string get_Name();
    void set_Name(std::string);
    std::string get_Info();
    void set_Info(std::string);
    int get_Id();
    void set_Id(int);
    bool get_Status();
    void set_Status(bool);
    
    //Unit(): m_id++
private:
    
    std::string m_Name;
    std::string m_Info;
    bool m_Status;
    int m_Id;
    
    
};






#endif /* Units_hpp */
