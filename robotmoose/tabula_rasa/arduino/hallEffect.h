#ifndef HALL_EFFECT_H
#define HALL_EFFECT_H

#include <Arduino.h>
class hallEffect
{
	int _pin;
	uint16_t _count;
	
	bool _reading;
	bool _oldReading;
	
public:
	hallEffect(int pin):_pin(pin),_count(0),_reading(false)
	{}
	
	void setup();
	uint16_t loop(); 
};
#endif
