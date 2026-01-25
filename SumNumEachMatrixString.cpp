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
  
  cout << "\nSum of numbers in each row:\n";
  for (int row = 0; row < rowsCount; ++row) {
    int rowSum = 0;
    for (int col = 0; col < colsCount; ++col) {
      rowSum += matrix[row][col];
    }
    cout << "Row " << row + 1 << ": " << rowSum << "\n";
  }
  
  return 0;
}
