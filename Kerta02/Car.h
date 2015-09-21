#pragma once

#include <string>

class Car
{
private:
	std::string modelName;

	unsigned int tankSize;
	unsigned int speed;
	unsigned int gas;
public:
	Car(std::string modelName, 
		unsigned int tankSize);

	// estet‰‰n kopionti
	Car(const Car& car) = delete;

	void print();
	void brake();
	void accelrate();

	~Car();
};