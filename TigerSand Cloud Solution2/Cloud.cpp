#include "Cloud.h"
#include <iostream>
#include <vector>
#include <string.h>
Cloud::Cloud()
{
}

//Cloud::~Cloud()
//{
//}

int Cloud::StartMenu() {
    int choice;
    std::cout << "Welcome to Tiger and Sands cloud soultion!\n\n"
		<< "1. Show connected units\n"
		<< "2. Add units\n"
		<< "3. Remove units\n"
		<< "4. Show Dashboard\n"
		<< "5. Exit\n";
    std::cin>>choice;
    return choice;
}

void Cloud::AddUnit(Unit* newUnit) {
	m_CloudUnits.push_back(newUnit);
}
/*
void Cloud::RemoveUnit(int unitID) {
	m_CloudUnits.at(m_CloudUnits.begin() + (unitID - 1));
}
*/
void Cloud::RemoveAllUnits() {
	m_CloudUnits.clear();
}

void Cloud::ListUnits() {
	std::string tempname;
	for (int i = 0; i < (sizeof(m_CloudUnits)); i++) {
	}
}

Unit Cloud::FillNewUnit(Unit *emptyUnit){
    
    //Unit filledUnit;
    std::string setName;
    std::string setInfo;
    int setId;
    bool setStatus;
    
    std::cout << "Name of new unit?"<< std::endl;
    std::cin >> setName;
    emptyUnit->set_Name(setName);
    
    std::cout << "Info of new unit?"<< std::endl;
    std::cin >> setInfo;
    emptyUnit->set_Info(setInfo);
    
    std::cout << "Activate new unit (Y/n)?"<< std::endl;
    std::cin >> setStatus;
    emptyUnit->set_Id(setStatus);
    
    std::cout << "ID number of new unit?"<< std::endl;
    std::cin >> setId;
    emptyUnit->set_Id(setId);
    
    return emptyUnit;
}
