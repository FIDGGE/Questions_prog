#include <iostream>
#include <string>
using namespace std;

int main() {
  string text;
  
  cout << "Enter string: ";
  getline(cin, text);
  
  int wordCount = 0;
  bool inWord = false;
  
  for (int charIndex = 0; charIndex < text.length(); ++charIndex) {
    if (text[charIndex] != ' ') {
      if (!inWord) {
        ++wordCount;
        inWord = true;
      }
    } else {
      inWord = false;
    }
  }
  
  cout << "Words: " << wordCount << "\n";
  
  return 0;
}
