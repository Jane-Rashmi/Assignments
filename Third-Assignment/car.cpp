#include "car.hpp"

Car::Car()          //default constructor
{
	cout<<"Constructor is called!\n"<<endl;
}
Car::Car(int year, string name, int speed=50)   //parameterized constructor
{
		ReleaseYear= year;
		customer= name;
		this->speed= speed;
		cout<<"Constructor is called!\n"<<endl;
}
Car::~Car()                       //destructor
{
	cout<<"Destructor is called!\n"<<endl;
}
int Car::getSpeed()
{
	return speed;
}
int Car::getYear()    
{
	return ReleaseYear;
}
string Car::getName()
{
	return customer;
}	
void Car::accelerate()  //This function increases the value of speed by 10 every time it is called
{
	speed+=10;
}
void Car::brake()    //This function decreases the value of speed by 10 every time it is called
{
	speed-=10;
}
void Car::display(Car car)  //HMI display
{
	cout<<"Customer: "<<car.getName()<<endl;
	cout<<"Release year: "<<car.getYear()<<endl;
	cout<<"Current speed: "<<car.getSpeed()<<endl;
}				

int main()
{
	Car car;
	Car fca(1999, "FCA");                
	Car honda(2019, "Honda Motor Company",100); 
	fca.display(fca);    
	honda.display(honda);
	return 0;
}