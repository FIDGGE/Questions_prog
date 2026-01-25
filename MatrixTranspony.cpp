#include <iostream>
using namespace std;

int main() {
  int rows;
  int cols;
  
  cout << "Enter rows: ";
  cin >> rows;
  cout << "Enter cols: ";
  cin >> cols;
  
  int matrix[100][100];
  int transposed[100][100];
  
  cout << "Enter matrix " << rows << "x" << cols << ":\n";
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
      cin >> matrix[row][col];
    }
  }
  
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
      transposed[col][row] = matrix[row][col];
    }
  }
  
  cout << "\nTransposed matrix " << cols << "x" << rows << ":\n";
  for (int row = 0; row < cols; row++) {
    for (int col = 0; col < rows; col++) {
      cout << transposed[row][col] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
