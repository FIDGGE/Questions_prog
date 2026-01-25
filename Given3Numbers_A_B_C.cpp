#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a;
  double b;
  double c;
  
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;
  
  if (a <= 0 || b <= 0 || c <= 0) {
    cout << "No\n";
    return 0;
  }
  
  if (a + b > c && a + c > b && b + c > a) {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Yes\n";
    cout << "Area = " << s << "\n";
  } else {
    cout << "No\n";
  }
  
  return 0;
}
