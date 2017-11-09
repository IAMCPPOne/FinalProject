#pragma once
#include "WaterResevoir.h"
#include "InternalResevoir.h"
#include "Hopper.h"
#include "Grinder.h"
class CoffeeMaker {
	WaterResevoir m_resevoir;
	InternalResevoir m_internalResevoir;
	Hopper m_beanHopper;
	Hopper m_groundsHopper;
	Grinder m_grinder;
	void print(char * message);
	char * m_makeCoffee(int cupCount);

public:
	void makeCoffee(int cupCount) {
		char * message = m_makeCoffee(cupCount);
		print(message);
	}
};
