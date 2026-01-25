#include <iostream>
#include <string>
using namespace std;

int main() {
  string surname;
  string name;
  string patronymic;
  
  cout << "Enter surname name patronymic: ";
  cin >> surname >> name >> patronymic;
  
  cout << surname << " " << name[0] << "." << patronymic[0] << ".\n";
  
  return 0;
}
