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
  
  cout << "\nOriginal array: ";
  for (int displayIndex = 0; displayIndex < arrSize; ++displayIndex) {
    cout << numbers[displayIndex] << " ";
  }
  cout << "\n";
  
  for (int passIndex = 0; passIndex < arrSize - 1; ++passIndex) {
    for (int compareIndex = 0; compareIndex < arrSize - passIndex - 1; ++compareIndex) {
      if (numbers[compareIndex] > numbers[compareIndex + 1]) {
        int tempValue = numbers[compareIndex];
        numbers[compareIndex] = numbers[compareIndex + 1];
        numbers[compareIndex + 1] = tempValue;
      }
    }
  }
  
  cout << "Sorted array: ";
  for (int resultIndex = 0; resultIndex < arrSize; ++resultIndex) {
    cout << numbers[resultIndex] << " ";
  }
  cout << "\n\n";
  
  return 0;
}
