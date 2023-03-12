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
class Truck: public Vehicle {
public:
  void print();
  Truck(int = 0, int = 0, int = 0, int = 0, string = " ");
private:
  int mpg;
  int tons;
  string model;
};

void Truck::print()
{
  cout << model << " gets " << mpg << " miles per gallon and can carry " << tons << " tons, and "; 
  Vehicle::print();
}

Truck::Truck(int wheels, int doors, int miles_pg, int weight, string name):Vehicle(){
  mpg = miles_pg;
  tons = weight;
  model = name;
};

int main() {
  // declare local variables
  int carW, carD, carMPG, truckW, truckD, truckMPG, truckTons;
  string carType, truckType;

  cout << "Enter car details\n";
  cout << "Number of wheels: ";
  cin >> carW;
  cout << "Number of doors: ";
  cin >> carD;
  cout << "MPG: ";
  cin >> carMPG;
  cin.ignore();
  getline(cin, carType);
  
  // declare Car object
  Car autoCar(carW, carD, carMPG, carType);

  cout << endl;
  cout << "Enter truck details\n";
  cout << "Number of wheels: ";
  cin >> truckW;
  cout << "Number of doors: ";
  cin >> truckD;
  cout << "MPG: ";
  cin >> truckMPG;
  cout << "How many tons can the truck carry: ";
  cin >> truckTons;
  cout << "Model name: ";
  cin >> truckType;

  // declare Truck object
  Truck autoTruck(truckW, truckD, truckMPG, truckTons, truckType);

  cout << endl;

  // call print function for your car and for your truck
  autoCar.print();
  autoTruck.print();

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
