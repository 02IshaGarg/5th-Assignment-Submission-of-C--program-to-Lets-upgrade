#include <iostream>
using namespace std;
int main() {
  int num1;
  cout << "Enter an first number: ";
  cin >> num1;
  int num2;
  cout << "Enter an second number: ";
  cin >> num2;
  if (num1 > num2) {
    cout << num1 << " is Greater." << endl;
  } 
  else if (num1 < num2) {
    cout << num2 << " is Greater." << endl;
  } 
  else {
    cout << "Both numbers are equal." << endl;
  }
  return 0;
}