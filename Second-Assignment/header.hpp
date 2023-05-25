using namespace std;
#include <iostream>
#include <string.h>

class Car{
public:	
	Car()
	{
		printf("Constructor is called!\n");
	}
	Car(int year, string name)
	{
		ReleaseYear= year;
		customer= name;
		speed= 0;
		printf("Constructor is called!\n");
	}
	~Car()
	{
		printf("Destructor is called!\n");
	}
	int accelerate();
	int brake();
private:                           //declaring the member variables
	int ReleaseYear;
	string customer;
	int speed;	
};