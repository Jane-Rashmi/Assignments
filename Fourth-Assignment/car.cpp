#include "car.hpp"

SoundSystem::SoundSystem()
{
    
}
SoundSystem::SoundSystem(int CurrentVolume)
{
    this->CurrentVolume=CurrentVolume;
}
void SoundSystem::VolumeInc()
{
	CurrentVolume+=1;
}
void SoundSystem::VolumeDec()
{
	CurrentVolume-=1;
}
int SoundSystem::getCurrentVolume()
{
    return CurrentVolume;
}
void SoundSystem::setCurrentVolume(int CurrentVolume)
{
    this->CurrentVolume= CurrentVolume;
}

TempMonitor::TempMonitor()
{
}
TempMonitor::TempMonitor(float CurrentTemp,float ExtTemp)
{
    this->CurrentTemp=CurrentTemp;
    this->ExtTemp=ExtTemp;
}
float TempMonitor::getCurrentTemp()
{
    return CurrentTemp;
}
float TempMonitor::getExtTemp()
{
    return ExtTemp;
}
void TempMonitor::setCurrentTemp(float CurrentTemp)
{
    this->CurrentTemp=CurrentTemp;
}
void TempMonitor::setExtTemp(float ExtTemp)
{
    this->ExtTemp=ExtTemp;
}

void TempMonitor::HighTempWarn()
{
	cout<<"Warning: The car temperature is higher than the external temperature\n";
}

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
	car.setCurrentVolume(100);
	car.VolumeInc();
	cout<< " Current volume after increase:"<<car.getCurrentVolume()<< endl;
	car.VolumeDec();
	cout<< " Current volume after decrease:"<<car.getCurrentVolume()<< endl;
	car.setCurrentTemp(20);
	car.setExtTemp(10);
	car.getCurrentTemp();
	car.getExtTemp();
	if(car.getCurrentTemp()>=car.getExtTemp())
	{
		car.HighTempWarn();
	}
	

	cout<<"This is multiple inheritance since class car is inheriting the classes soundsystem and TempMonitor\n"<<endl;
	return 0;
}