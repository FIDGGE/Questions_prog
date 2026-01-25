#include <iostream>
using namespace std;

int main() {
  int arrSize;
  
  cout << "Enter array size: ";
  cin >> arrSize;
  
  int numbers[1000];
  
  cout << "Enter " << arrSize << " numbers:\n";
  for (int index = 0; index < arrSize; ++index) {
    cin >> numbers[index];
  }
  
  int minElement = numbers[0];
  
  for (int index = 1; index < arrSize; ++index) {
    if (numbers[index] < minElement) {
      minElement = numbers[index];
    }
  }
  
  cout << "Minimum element: " << minElement << "\n";
  
  return 0;
}
