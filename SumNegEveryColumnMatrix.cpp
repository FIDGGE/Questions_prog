#include <iostream>
using namespace std;

int main() {
  int rowsCount;
  int colsCount;
  
  cout << "Enter rows: ";
  cin >> rowsCount;
  cout << "Enter columns: ";
  cin >> colsCount;
  
  int matrix[100][100];
  
  cout << "Enter matrix " << rowsCount << "x" << colsCount << ":\n";
  for (int row = 0; row < rowsCount; ++row) {
    for (int col = 0; col < colsCount; ++col) {
      cin >> matrix[row][col];
    }
  }
  
  cout << "\nSum of negative numbers in each column:\n";
  for (int col = 0; col < colsCount; ++col) {
    int columnSum = 0;
    for (int row = 0; row < rowsCount; ++row) {
      if (matrix[row][col] < 0) {
        columnSum += matrix[row][col];
      }
    }
    cout << "Column " << col + 1 << ": " << columnSum << "\n";
  }
  
  return 0;
}
