#include <iostream>
using namespace std;

int main() {
  int n;
  
  cout << "Enter year: ";
  cin >> n;
  
  bool isLeap = false;
  
  if (n % 4 == 0) {
    if (n % 100 == 0) {
      if (n % 400 == 0) {
        isLeap = true;
      }
    } else {
      isLeap = true;
    }
  }
  
  if (isLeap) {
    cout << "Leap year\n";
  } else {
    cout << "Not leap year\n";
  }
  
  return 0;
}
