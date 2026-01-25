#include <iostream>
#include <string>
using namespace std;

int main() {
  string telegram;
  
  cout << "Enter telegram text: ";
  getline(cin, telegram);
  
  int wordCount = 0;
  bool inWord = false;
  
  for (int charIndex = 0; charIndex < telegram.length(); ++charIndex) {
    if (telegram[charIndex] != ' ') {
      if (!inWord) {
        ++wordCount;
        inWord = true;
      }
    } else {
      inWord = false;
    }
  }
  
  int pricePerWord = 10;
  int totalCost = wordCount * pricePerWord;
  
  cout << "Words: " << wordCount << "\n";
  cout << "Cost: " << totalCost << " rubles\n";
  
  return 0;
}
