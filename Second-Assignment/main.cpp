#include "header.hpp"

using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	Car obj1;               
	Car car(1999, "FCA");   
	for(int k=0;k<5; k++)      
	{
		int accelerated_speed=car.accelerate();
		std::cout<<"accelerated speed:"<<accelerated_speed<<"\n";

	}
	for(int j=0;j<5; j++)     
	{
		int decelerated_speed=car.brake();
		std::cout<<"decelerated speed:"<<decelerated_speed<<"\n";
	}
	return 0;
}

int Car::accelerate()  //This function increases the value of speed by 10 every time it is called
{
	speed+=10;
	return speed;
}
int Car::brake()    //This function decreases the value of speed by 10 every time it is called
{
	speed-=10;
	return speed;
}