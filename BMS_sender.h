#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define NUMBERS_OF_READINGS    50

void printToConsole(char batteryData[]);
void readDataFromFile(float* Temperature, float* SOC);
void sendDataToConsole(float* Temperature, float* SOC);
void BMS_DataSender(void);
