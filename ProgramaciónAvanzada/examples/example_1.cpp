#include <iostream>
#include <vector>

using namespace std;

class Car {
public:
  string model;
  int value;
  int id;
  bool soldOut;

  Car(string model, int value, int id, bool soldOut) { this->model = model; }
};

int findCar(vector<Car> car, int id) {
  int pos;
  for (auto i = 0; i < car.size(); i++) {
    if (car[i].id == id) {
      pos = i;
    }
  }

  return pos;
}

void printSoldOutCar(vector<Car> car) {
  for (auto i = 0; i < car.size(); i++) {
    if (car[i].soldOut == true) {
      cout << car[i].id;
      cout << car[i].model;
    }
  }
}

int main() {
  vector<Car> car;

  int pos = findCar(car, 1);

  car[pos].id = 1;
  car[pos].soldOut = true;

  int option;
  cout << "Programa de venta de autos";
  cout << "opcion 1: agregar autos";
  while (option != 0) {
    if (option == 1) {
      int id;
      cout << "ingrese id";
      cin >> id;

      // Otras opciones
      Car newCar = Car("ee", 1, id, false);
      car.push_back(newCar);
    } else if (option == 3) {
      printSoldOutCar(car);
    }
  }
}
