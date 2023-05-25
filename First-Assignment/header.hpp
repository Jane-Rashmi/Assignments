using namespace std;
#include <iostream>
#include <string.h>

class Car{
private: 
	int ReleaseYear;
	string customer;
	int speed;
public:	
	void getValues(int year,string name,int vehiclespeed);
	int accelerate();
	int brake();
};

void Car::getValues(int year, string name, int vehiclespeed)
{
	ReleaseYear= year;
	customer= name;
	speed= vehiclespeed;
}

int Car::accelerate()
{
	speed+=10;
	return speed;
}
int Car::brake()
{
	speed-=10;
	return speed;
}