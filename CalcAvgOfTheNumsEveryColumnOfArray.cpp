#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  int rowsCount;
  int colsCount;
  int rowIndex;
  int colIndex;
  
  cout << "Enter number of rows: ";
  cin >> rowsCount;
  
  cout << "Enter number of columns: ";
  cin >> colsCount;

  int matrix[1000][1000];
  
  cout << "Enter matrix elements:\n";
  for (rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
    for (colIndex = 0; colIndex < colsCount; ++colIndex) {
      cin >> matrix[rowIndex][colIndex];
    }
  }
  
  cout << "\nMatrix:\n";
  for (rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
    for (colIndex = 0; colIndex < colsCount; ++colIndex) {
      cout << setw(4) << matrix[rowIndex][colIndex];
    }
    cout << "\n";
  }
  
  cout << "\nColumn averages:\n";
  for (colIndex = 0; colIndex < colsCount; ++colIndex) {
    int columnSum = 0;
    for (rowIndex = 0; rowIndex < rowsCount; ++rowIndex) {
      columnSum += matrix[rowIndex][colIndex];
    }
    double columnAverage = (double)columnSum / rowsCount;
    cout << "Column " << colIndex + 1 << ": " << columnAverage << "\n";
  }
  
  cout << "\n";
  return 0;
}
