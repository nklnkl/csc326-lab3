#include <iostream>
#include "reverse.cpp"
#include "polynomials.cpp"
using namespace std;

int main () {
  int command = 1;

  while (command != 0) {
    cout << "0) Exit" << endl <<  "1) Number reverse." << endl << "2) Polynomials" << endl;
    cout << "Command: ";
    cin >> command;

    switch (command) {

      case 0: {
        cout << "Exiting." << endl;
        break;
      }

      case 1: {
        Reverse reverse;
        int n = 0, m = 0;
        cout << "Enter number: ";
        cin >> n;
        cout << "1) Interation." << endl << "2) Recursion." << endl << "Method: ";
        cin >> m;
        cout << "Reversed number: " << reverse.rev(n, m) << endl;
        break;
      }

      case 2: {
        cout << "nothing" << endl;
        break;
      }

      default: {}
        // Do nothing.
    }
  }
  return 0;
};
