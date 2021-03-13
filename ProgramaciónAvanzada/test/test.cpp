#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> nameVector;
  vector<int> ageVector;
  vector<vector<string>> hobbiesVector;

  int person = 0;
  while (person < 3) {
    string name;
    int age;
    cout << "ingresa los datos de la: " << person + 1 << " persona" << endl;
    cout << "Ingresa el nombre" << endl;
    cin >> name;
    nameVector.push_back(name);

    cout << "Ingresa la edad" << endl;
    cin >> age;
    ageVector.push_back(age);

    cout << "Ingrese los hobbies (para terminar ingrese 0)" << endl;
    vector<string> hobbies;
    while (true) {
      string hobbie;
      cin >> hobbie;

      if (hobbie == "0") {
        break;
      }

      hobbies.push_back(hobbie);
    }
    hobbiesVector.push_back(hobbies);
    person++;
  }

  cout << endl;

  for (auto i = 0; i < 3; i++) {
    if (ageVector[i] >= 18) {
      cout << "El nombre es: " << nameVector[i] << endl;
      cout << "La edad es: " << ageVector[i] << endl;
      cout << "sus hobbies son: " << endl;
      for (auto iterator : hobbiesVector[i]) {
        cout << iterator << endl;
      }
    }
  }
}
