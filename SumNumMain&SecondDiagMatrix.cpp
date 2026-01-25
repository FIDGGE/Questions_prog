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
  
  int mainDiagonalSum = 0;
  int secondaryDiagonalSum = 0;
  
  for (int index = 0; index < size; ++index) {
    mainDiagonalSum += matrix[index][index];
    secondaryDiagonalSum += matrix[index][size - 1 - index];
  }
  
  cout << "\nMain diagonal sum: " << mainDiagonalSum << "\n";
  cout << "Secondary diagonal sum: " << secondaryDiagonalSum << "\n";
  
  return 0;
}
