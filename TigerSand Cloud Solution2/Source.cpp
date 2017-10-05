#include <iostream>
#include "Config.h"
#include "Unit.h"
#include "Cloud.h"

int main() {
   
	Cloud *cloud = new Cloud();

	int menuChoice = 0;

	menuChoice = cloud->StartMenu();

	switch (menuChoice) {

	case 1: { //show connected units
		cloud->ListUnits();
		break;
	}
	case 2: {// add unit
		Unit *unit = new Unit();
        cloud->FillNewUnit(unit);
		cloud->AddUnit(unit);
		break;
	}
	/*case 3: {//remove unit
		cloud->RemoveUnit(unitID);
		break;
	}*/
	case 4: { //show dashboard
		break;
	}

	case 5: { //exit
		std::cout << "Closing program";
		SleepFunction(300);
		ClearScreenFunction();
		exit(0);
		break;
	}

	default: {
		std::cout << "Wrong input, try again!";
		SleepFunction(400);
		ClearScreenFunction();
		break;
	}
	}
    return 0;
}
