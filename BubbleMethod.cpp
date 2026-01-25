#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  int arrSize;
  int inputIndex;
  int displayIndex;
  int passIndex;
  int compareIndex;
  int tempValue;
  int resultIndex;
  
  cout << "Enter array size: ";
  cin >> arrSize;
  
  vector<int> numbers(arrSize);
  
  cout << "Enter " << arrSize << " numbers:\n";
  for (inputIndex = 0; inputIndex < arrSize; ++inputIndex) {
    cin >> numbers[inputIndex];
  }
  
  cout << "\nOriginal array: ";
  for (displayIndex = 0; displayIndex < arrSize; ++displayIndex) {
    cout << numbers[displayIndex] << " ";
  }
  cout << "\n";
  
  for (passIndex = 0; passIndex < arrSize - 1; ++passIndex) {
    for (compareIndex = 0; compareIndex < arrSize - passIndex - 1; ++compareIndex) {
      if (numbers[compareIndex] > numbers[compareIndex + 1]) {
        tempValue = numbers[compareIndex];
        numbers[compareIndex] = numbers[compareIndex + 1];
        numbers[compareIndex + 1] = tempValue;
      }
    }
  }
  
  cout << "Sorted array: ";
  for (resultIndex = 0; resultIndex < arrSize; ++resultIndex) {
    cout << numbers[resultIndex] << " ";
  }
  cout << "\n\n";
  
  return 0;
}
