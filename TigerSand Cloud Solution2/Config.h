#pragma once

//if on xCode, change to false
#define USING_VISUAL_STUDIO false;

#ifdef USING_VISUAL_STUDIO

void SleepFunction(int milliseconds);
void ClearScreenFunction();

#else
void SleepFunction(int microseconds);
void ClearScreenFunction();

#endif

