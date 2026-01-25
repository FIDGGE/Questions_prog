#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
  int arrSize;
  
  cout << "Enter array size: ";
  cin >> arrSize;
  
  vector<int> numbers(arrSize);
  
  cout << "Enter " << arrSize << " numbers:\n";
  
  for (int inputIndex = 0; inputIndex < arrSize; ++inputIndex) {
    cin >> numbers[inputIndex];
  }
  
  int totalSum = 0;
  int totalProduct = 1;
  
  for (int calcIndex = 0; calcIndex < arrSize; ++calcIndex) {
    totalSum += numbers[calcIndex];
    totalProduct *= numbers[calcIndex];
  }
  
  cout << "\nSum: " << totalSum << "\nProduct: " << totalProduct << "\n\n";
  
  return 0;
}
