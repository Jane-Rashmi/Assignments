using namespace std;
#include <iostream>
#include <string.h>

class Car{
public:	
	Car();
	Car(int year, string name, int speed);
	int getYear();
	string getName();
	int getSpeed();
	void accelerate();
	void brake();
	void display(Car car);
	~Car();
private:                           //declaring the member variables
	int ReleaseYear;
	string customer;
	int speed;	
};