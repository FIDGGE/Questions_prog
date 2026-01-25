#include <iostream>
using namespace std;

int main() {
  int task;
  
  cout << "Choose task:\n1 - Matrix max/min swap\n2 - Check prime number\n";
  cin >> task;
  
  if (task == 1) {
    int rows;
    int cols;
    
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    
    int matrix[100][100];
    
    cout << "Enter matrix " << rows << "x" << cols << ":\n";
    for (int row = 0; row < rows; ++row) {
      for (int col = 0; col < cols; ++col) {
        cin >> matrix[row][col];
      }
    }
    
    int maxRow = 0;
    int maxCol = 0;
    int minRow = 0;
    int minCol = 0;
    
    for (int row = 0; row < rows; ++row) {
      for (int col = 0; col < cols; ++col) {
        if (matrix[row][col] > matrix[maxRow][maxCol]) {
          maxRow = row;
          maxCol = col;
        }
        if (matrix[row][col] < matrix[minRow][minCol]) {
          minRow = row;
          minCol = col;
        }
      }
    }
    
    int temp = matrix[maxRow][maxCol];
    matrix[maxRow][maxCol] = matrix[minRow][minCol];
    matrix[minRow][minCol] = temp;
    
    cout << "\nMatrix after swap:\n";
    for (int row = 0; row < rows; ++row) {
      for (int col = 0; col < cols; ++col) {
        cout << matrix[row][col] << " ";
      }
      cout << "\n";
    }
    cout << "\nMax was: " << matrix[minRow][minCol] << " at [" << maxRow << "][" << maxCol << "]\n";
    cout << "Min was: " << matrix[maxRow][maxCol] << " at [" << minRow << "][" << minCol << "]\n";
    
  } else if (task == 2) {
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    bool isPrime = true;
    
    if (number <= 1) {
      isPrime = false;
    } else {
      for (int divider = 2; divider * divider <= number; ++divider) {
        if (number % divider == 0) {
          isPrime = false;
          break;
        }
      }
    }
    
    if (isPrime) {
      cout << "Prime\n";
    } else {
      cout << "Not prime\n";
    }
  }
  
  return 0;
}
