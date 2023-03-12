/**********************
Lab: Week 5
Student first name: Alexis 
Student last name: Valdivia
***********************/
#include <iostream>
using namespace std;

// Vehicle
class Vehicle {
public: 
  void print();
  Vehicle (int wheels = 0, int doors = 0);
  // constructor with default parameters
private:
  int num_wheels;
  int num_doors;
};  

Vehicle::Vehicle(int wheels, int doors)
{
  num_wheels = wheels;
  num_doors = doors;
}

void Vehicle::print()
{
  cout << num_wheels << "wheels and " << num_doors << num_doors << " doors." << endl;
}

// Car
class Car: public Vehicle {
public:
  void print();
  Car(int = 0, int = 0, int = 0, string = " ");
private: 
  int mpg;
  string model;
};

void Car::print()
{
  cout << model << " gets " << mpg << " miles per gallon has ";
  Vehicle::print();
}

Car::Car(int wheels, int doors, int miles_pg, string name): Vehicle()
{
  mpg = miles_pg;
  model = name;
}

// Truck

int main() {
  // declare local variables

  cout << "Enter car details\n";

  // declare Car object

  cout << endl;
  cout << "Enter truck details\n";

  // declare Truck object

  cout << endl;

  // call print function for your car and for your truck

  cout << "\nGoodbye\n";
  return 0;
}

/***************************************
YOUR OUTPUT:


SAMPLE OUTPUT:
Enter car details
Number of wheels: 4
Number of doors: 4
MPG: 36
Model name: Toyota

Enter truck details
Number of wheels: 18
Number of doors: 2
MPG: 22
How many tons can the truck carry: 5
Model name: Peterbilt

Toyota gets 36 miles per gallon and has 4 wheels and 4 doors.
Peterbilt gets 22 miles per gallon, can carry 5 tons, and has 18 wheels and 2
doors.

Goodbye
****************************************/
