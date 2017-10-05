#include "Config.h"

#if USING_VISUALSTUDIO
#include <Windows.h>
void SleepFunction(int milliseconds){
	Sleep(milliseconds);
}

void ClearScreenFunction() {
	system("CLS");
}

#else
#include <unistd.h>
#include <stdlib.h>
void SleepFunction(int microseconds) {
	microseconds = microseconds * 1000;
	usleep(microseconds);
}

void ClearScreenFunction() {
	system("clear");
}

#endif

