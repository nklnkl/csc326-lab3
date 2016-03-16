#include <iostream>
#include "reverse.cpp"
using namespace std;

int reverse ();
int polynomials ();

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
        reverse();
        break;
      }

      case 2: {
        polynomials();
        break;
      }

      default: {}
        // Do nothing.
    }
  }
  return 0;
};

int reverse () {
  Reverse reverse;
  int n = 0, m = 0;
  cout << "Enter number: ";
  cin >> n;
  cout << "1) Interation." << endl << "2) Recursion." << endl << "Method: ";
  cin >> m;
  cout << "Reversed number: " << reverse.rev(n, m) << endl;
  return 0;
}

int polynomials () {

}
