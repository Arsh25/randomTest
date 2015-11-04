#include "hallEffect.h"

uint16_t hallEffect::loop()
{
	_oldReading = _reading;
	_reading = digitalRead(_pin);
	if(_oldReading != _reading)
		_count++;
	return _count;
}

void hallEffect::setup()
{
	pinMode(_pin,INPUT_PULLUP);
	
}

