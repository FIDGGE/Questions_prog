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
  
  int totalSum = 0;
  int totalProduct = 1;
  
  for (int index = 0; index < arrSize; ++index) {
    totalSum += numbers[index];
    totalProduct *= numbers[index];
  }
  
  cout << "Sum: " << totalSum << "\n";
  cout << "Product: " << totalProduct << "\n";
  
  return 0;
}
