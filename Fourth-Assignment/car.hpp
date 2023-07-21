using namespace std;
#include <iostream>
#include <string.h>

class SoundSystem
{
    private:
    int CurrentVolume;
    public:
    SoundSystem();
    SoundSystem(int CurrentVolume);
    void VolumeInc();
    void VolumeDec();
    int getCurrentVolume();
    void setCurrentVolume(int CurrentVolume);

};

class TempMonitor
{
    private:
        float CurrentTemp;
        float ExtTemp;
    public:
        TempMonitor();
        TempMonitor(float CurrentTemp,float ExtTemp);
        void HighTempWarn();
        float getCurrentTemp();
        float getExtTemp();
        void setCurrentTemp(float CurrentTemp);
        void setExtTemp(float ExtTemp);

};

class Car:public SoundSystem, public TempMonitor{
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

