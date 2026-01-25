#include <iostream>
using namespace std;

int main() {
  int size;
  
  cout << "Enter matrix size: ";
  cin >> size;
  
  int matrix[100][100];
  
  cout << "Enter matrix " << size << "x" << size << ":\n";
  for (int row = 0; row < size; ++row) {
    for (int col = 0; col < size; ++col) {
      cin >> matrix[row][col];
    }
  }
  
  int replacementValue;
  cout << "Enter replacement value: ";
  cin >> replacementValue;
  
  cout << "\nOriginal matrix:\n";
  for (int row = 0; row < size; ++row) {
    for (int col = 0; col < size; ++col) {
      cout << matrix[row][col] << " ";
    }
    cout << "\n";
  }
  
  for (int index = 0; index < size; ++index) {
    matrix[index][index] = replacementValue;
  }
  
  cout << "\nMatrix after replacement:\n";
  for (int row = 0; row < size; ++row) {
    for (int col = 0; col < size; ++col) {
      cout << matrix[row][col] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
