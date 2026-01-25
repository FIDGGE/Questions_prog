#include <iostream>
using namespace std;

int main() {
  int totalFloors;
  int apartmentNumber;
  
  cout << "Enter total floors: ";
  cin >> totalFloors;
  cout << "Enter apartment number: ";
  cin >> apartmentNumber;
  
  int apartmentsPerFloor = 3;
  int totalApartments = totalFloors * apartmentsPerFloor;
  
  if (apartmentNumber < 1 || apartmentNumber > totalApartments) {
    cout << "Invalid apartment number\n";
    return 0;
  }
  
  int targetFloor = (apartmentNumber - 1) / apartmentsPerFloor + 1;
  
  if (targetFloor % 2 == 0) {
    --targetFloor;
  }
  
  cout << "Elevator will stop at floor: " << targetFloor << "\n";
  
  return 0;
}
