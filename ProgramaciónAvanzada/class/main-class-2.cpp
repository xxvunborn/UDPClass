#include <iostream>
#include <string>

using namespace std;

class Car {
public:
  int year;
  int doors;
  string brand;
  string model;

  Car(int year, int doors, string brand, string model) {
    this->year = year;
    this->doors = doors;
    this->brand = brand;
    this->model = model;
  }

  string get_owner();
  void set_owner(string);

private:
  string owner;
};

string Car::get_owner() { return this->owner; }

void Car::set_owner(string owner) { this->owner = owner; }

int main() {
  Car newCar(2020, 5, "BMW", "Serie M");
  newCar.year = 2020;
  newCar.doors = 5;
  newCar.brand = "BMW";
  newCar.model = "Serie M";
  newCar.set_owner("Chris");

  cout << "La marca del auto es :" << newCar.brand << endl;
  cout << "El modelo del auto es :" << newCar.model << endl;
  cout << "La año del auto es :" << newCar.year << endl;
  cout << "El dueño es :" << newCar.get_owner() << endl;
  cout << "Y tiene " << newCar.doors << " Puertas" << endl;
}
