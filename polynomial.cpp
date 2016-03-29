#include "polynomial.h"

Polynomial::Polynomial () {
  size = 0;
  coefficients = new int [size];
}

Polynomial::~Polynomial () {
  delete [] coefficients;
}

bool Polynomial::add (int * addend, int addendSize) {
  int * sum;
  int sumSize;

  if (addendSize > size)
    sumSize = addendSize;
  else
    sumSize = size;
  sum = new int [sumSize];

  for (int i = 0; i < sumSize; i++) {
    *(sum + i) = 0;
    if (*(addend + i))
      *(sum + i) += *(addend + i);
    if (*(coefficients + i))
      *(sum + i) += *(coefficients + i);
  }

  delete [] coefficients;
  size = sumSize;
  coefficients = sum;
  return true;
}
bool Polynomial::add (Polynomial * addend) {
  return true;
}

int Polynomial::evaluate (int x) const {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    int coefficient = *(coefficients + i);
    sum += coefficient * pow(x, i);
  }
  return sum;
}

string Polynomial::print () const {
  // The string to be returned.
  string str = "";

  // Loop through the coefficients, backwards, since it goes from smallest to highest.
  // and the general usage is usually to print them highest to smallest.
  for (int i = size - 1; i > -1; i--) {

    // If the current coefficient is not zero.
    if (*(coefficients + i) != 0) {

      // Append the coefficient's string version via ascii look up.
      str += intToString( *(coefficients + i) );

      // If the current index is not zero.
      if (i != 0) {
        // Append the 'x to the power' & '+'.
        str += "x^" + intToString(i) + " + ";
      }
    }
  }
  return str;
}

int Polynomial::pow (int base, int exponent) const {
  int total = 1;
  for (int i = 0; i < exponent; i++)
    total *= base;
  return total;
}

int Polynomial::digitCount (int n) const {
  if (n < 0) return -1;
  if (n == 0) return 0;
  if (n < 10) return 1;
  if (n < 100) return 2;
  if (n < 1000) return 3;
  if (n < 10000) return 4;
  if (n < 100000) return 5;
  if (n < 1000000) return 6;
  if (n < 10000000) return 7;
  if (n < 100000000) return 8;
  if (n < 1000000000) return 9;
  return 10;
}

string Polynomial::intToString (int n) const {
  // The length of the integer/digit count.
  int count = digitCount (n);
  // The string to return.
  string str;
  // Loop through the digit backwards to append the ascii char version to the string.
  for (int i = 0; i < count; i++) {
    str = ((char) (n % 10 + 48)) + str;
    n = n / 10;
  }
  return str;
}
