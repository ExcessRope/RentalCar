/****************************************************************************************
* JohnsonNathanielQuestion4.cpp
* Nate Johnson
*
* Rental car program for Final Exam.
****************************************************************************************/

#include <iostream>
using namespace std; 

class RentalCar {
public:
	RentalCar(const string &);
	
	void setCarType(const string &);
	string getCarType() const;	
	void setDailyRate();
	double getDailyRate() const;	
private:
	string carType;
	double dailyRate;	
}; // end class RentalCar definition

RentalCar::RentalCar(const string &type){
	setCarType(type);
	setDailyRate();
} // end RentalCar constructor

void RentalCar::setCarType(const string &type) {
	carType = type;
} // end funtion setCarType

string RentalCar::getCarType() const {
	return carType;
} // end function getCarType

void RentalCar::setDailyRate() {
	if (carType == "car")
		dailyRate = 49.99;
	else if (carType == "van")
		dailyRate = 69.99;
	else
		dailyRate = 89.99;
} // end function setDailyRate

double RentalCar::getDailyRate() const {
	return dailyRate;
} // end function getDailyRate



class Luxury : public RentalCar{
public:
	Luxury(const string &);	
	double getDailyRate();
}; // end class RentalCar definition

Luxury::Luxury(const string &type) : RentalCar(type) {
	setDailyRate();
} // end Luxury constructor

double Luxury::getDailyRate() {
	return RentalCar::getDailyRate() + 20;
} // end function getDailyRate


int main()
{
	RentalCar car1("van");
	
	Luxury car2("truck");
	
	cout << "car1 type: " << car1.getCarType() << endl;
	cout << "car1 rate: " << car1.getDailyRate() << endl;
	
	cout << "\ncar2 type: " << car2.getCarType() << endl;
	cout << "car2 rate: " << car2.getDailyRate() << endl;
	
	car2.setCarType("car");
	car2.setDailyRate();
	cout << "\ncar2 has been changed to type: " << car2.getCarType() << endl;
	cout << "car2 new rate is: " << car2.getDailyRate() << endl;
		
} // end function main
