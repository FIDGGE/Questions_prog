#include <iostream>
using namespace std;

int main() {
  int size;
  
  cout << "Enter matrix size: ";
  cin >> size;
  
  int original[100][100];
  int rotated[100][100];
  
  cout << "Enter matrix " << size << "x" << size << ":\n";
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      cin >> original[row][col];
    }
  }
  
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      rotated[col][size - 1 - row] = original[row][col];
    }
  }
  
  cout << "\nRotated matrix:\n";
  for (int row = 0; row < size; row++) {
    for (int col = 0; col < size; col++) {
      cout << rotated[row][col] << " ";
    }
    cout << "\n";
  }
  
  return 0;
}
