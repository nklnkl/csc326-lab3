#include <iostream>
#include "reverse.cpp"
#include "polynomial.cpp"
using namespace std;

int reverse ();
int polynomials ();

int main () {
  int command = 2;

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
  // To hold command input for later usage.
  int command;

  // While command is greater than zero;
  while (command > 0) {
    cout << "0) Exit. " << endl << "1) Create 1 polynomial and evaluate it." << endl << "2) Create 2 polynomials and add them." << endl;
    cout << "Command: ";
    cin >> command;

    // Handle command.
    switch (command) {

      // Create a polynomial, print it, and evaluate it.
      case 1:

        // Buffer for input.
        int input;

        // Get degree and coefficients.
        cout << "Polynomial's highest degree: ";
        cin >> input;
        input += 1;

        // Buffer for coefficients. input is currently the highest degree.
        int * coefficients;
        coefficients = new int [input];
        cout << "From highest to lowest degree, enter the coefficients." << endl;
        for (int i = input - 1; i > -1; i--) {
          cout << "coefficient: ";
          cin >> *(coefficients + i);
        }

        // Create the polynomial. input is currently the highest degree.
        Polynomial * poly;
        poly = new Polynomial ();
        poly->add(coefficients, input);

        // Print the poly.
        cout << poly->print() << endl;

        // Evaluate with x. input becomes the x for evaluation.
        cout << "Evaluate for x." << endl;
        cout << "x: ";
        cin >> input;
        cout << "Result: " << poly->evaluate(input) << endl;

        // Clear buffer out of memory.
        delete [] coefficients;
        delete poly;
        break;

      case 2:
        // Used for input.
        int input1;
        // The polynomial to be used for this case.
        Polynomial * poly1;
        poly1 = new Polynomial();

        // Iteration for amount of polynomials to use.
        for (int i = 0; i < 2; i++) {
          // The buffer for the polynomial coefficients.
          int * coeffs;

          // Get highest degree for current polynomial and set array as so.
          cout << "Polynomial " << i << "'s highest degree: ";
          cin >> input1;
          input1 +=1;
          coeffs = new int [input1];

          // Iterate to get coefficients.
          for (int i = input1 - 1; i > -1; i--) {
            cout << "coefficient: ";
            cin >> *(coeffs + i);
          }

          poly1->add(coeffs, input1);
          cout << poly1->print() << endl;
          delete [] coeffs;
        }
        cout << poly1->print() << endl;
        delete poly1;
        break;

      default:
        command = 0;
        break;
    }
  }

  return 0;
}
