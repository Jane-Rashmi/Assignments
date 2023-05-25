#include "header.hpp"

using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	Car car;
	int k;
	int j;
	car.getValues(1999, "FCA", 200);
	for(k=0;k<5; k++)
	{
		int accelerated_speed=car.accelerate();
		std::cout<<"accelerated speed:"<<accelerated_speed<<"\n";

	}
	for(j=0;j<5; j++)
	{
		int decelerated_speed=car.brake();
		std::cout<<"decelerated speed:"<<decelerated_speed<<"\n";
	}
	return 0;
}
