#ifndef SDCARD_MANAGER_H
#define SDCARD_MANAGER_H
#pragma once

#include "DataStructs.h"

#include <SD.h>

SDClass sd;

extern char line[15];
extern uint8_t sdcardOK;
extern TemperatureLimits tl;
extern bool heater;

//------------------------------------------------------------------------------
// Store error strings in flash to save RAM.
#define error(s) sd.errorHalt(&Serial, F(s))

void initSDCard(void);
char* skipSpace(char* str);
bool parseLine(char* str, TemperatureLimits *tl);
int getNewTempCondiction(TemperatureLimits *tl);

#endif //SDCARD_MANAGER_H
