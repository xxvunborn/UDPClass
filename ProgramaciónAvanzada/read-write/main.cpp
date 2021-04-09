#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

template <class type> vector<type> split(string line, char character) {
  std::replace(line.begin(), line.end(), character, ' ');

  // string
  vector<type> split;
  stringstream ss(line);
  string temp;

  while (ss >> temp) {
    split.push_back(temp);
  }

  return split;
}

class Car {
public:
  string id;
  string brand;
  string model;
  string isNew;
  string soldOut;
  string sellVendor;
  string price;

  void print() {
    cout << "ID: " << this->id << endl;
    cout << "brand: " << this->brand << endl;
    cout << "model: " << this->model << endl;
    cout << "isNew: " << this->isNew << endl;
    cout << "soldOut: " << this->soldOut << endl;
    cout << "sellVendor: " << this->sellVendor << endl;
    cout << "price: " << this->price << endl;
  }
};

int main() {
  ifstream file{"file.txt"};
  vector<Car> cars;

  if (file) {
    string line{};

    while (getline(file, line)) {
      vector<string> split_line = split<string>(line, '|');
      Car newCar;

      newCar.id = split_line[0];
      newCar.brand = split_line[1];
      newCar.model = split_line[2];
      newCar.isNew = split_line[3];
      newCar.soldOut = split_line[4];
      newCar.sellVendor = split_line[5];
      newCar.price = split_line[6];

      cars.push_back(newCar);
    }
  }

  // for (auto car : cars) {
  // if (car.id == "4") {
  // car.print();
  // car.soldOut = "true";
  // cout << "---------" << endl;
  // car.print();
  //}
  //}

  ofstream out{"file_out.txt"};

  if (out) {
    for (auto car : cars) {
      // cout << "id|brand|model|new|sellOut|sellVendor|price"
      out << car.id << "|" << car.brand << "|" << car.model << "|" << car.isNew
          << "|" << car.soldOut << "|" << car.sellVendor << "|" << car.price
          << "|"
          << "AA"
          << "\n";
    }
  }

  return 0;
}
