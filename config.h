#ifndef CONFIG_H
#define CONFIG_H

#include <QList>

// Raspberry Hat BULME
const QList<int> LEDS = {25, 24, 23, 18}; // Output pins
const QList<int> BUTTONS = {22, 27, 17}; // Input pins
enum  {DOWN, RESET, UP};

// Chip configuration Raspberry specific
const int LFLAGS = 0;
const int CHIP = 0;

// Update interval for reading pin state
const int T_UPDATE = 100; //  ms

#endif // CONFIG_H
