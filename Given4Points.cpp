#include <iostream>
using namespace std;

int main() {
  double x1, y1, x2, y2, x3, y3, x4, y4;
  
  cout << "Enter x1 y1: ";
  cin >> x1 >> y1;
  cout << "Enter x2 y2: ";
  cin >> x2 >> y2;
  cout << "Enter x3 y3: ";
  cin >> x3 >> y3;
  cout << "Enter x4 y4: ";
  cin >> x4 >> y4;
  
  bool isParallelogram = false;
  
  // первая проверка A1A2 параллельно A3A4 и A1A4 параллельно A2A3
  if (x2 - x1 == x4 - x3 && y2 - y1 == y4 - y3 &&
      x4 - x1 == x3 - x2 && y4 - y1 == y3 - y2) {
    isParallelogram = true;
  }
  
  // вторая прповерка A1A2 параллельно A3A4 и A1A3 параллельно A2A4
  if (x2 - x1 == x4 - x3 && y2 - y1 == y4 - y3 &&
      x3 - x1 == x4 - x2 && y3 - y1 == y4 - y2) {
    isParallelogram = true;
  }
  
  // третья A1A3 параллельно A2A4 и A1A4 параллельно A2A3
  if (x3 - x1 == x4 - x2 && y3 - y1 == y4 - y2 &&
      x4 - x1 == x3 - x2 && y4 - y1 == y3 - y2) {
    isParallelogram = true;
  }
  
  if (isParallelogram) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  
  return 0;
}
