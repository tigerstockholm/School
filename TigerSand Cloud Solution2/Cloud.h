#pragma once
#include <vector>
#include "Unit.h"
class Cloud
{

public:
	Cloud();
	~Cloud();

	int StartMenu();
	void AddUnit(Unit* newUnit);
	void RemoveUnit(int UnitID);
	void RemoveAllUnits();
	void ListUnits();
    Unit FillNewUnit(Unit* emptyUnit);
	
protected: 
	std::vector<Unit*> m_CloudUnits;
};
