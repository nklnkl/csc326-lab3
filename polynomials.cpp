#include 'polynomials.cpp';

Polynomials::Polynomials () {
  n = new int [0];
};
Polynomials::~Polynomials () {
  delete [] n;
};

int Polynomials::get (int n) const {
  switch (n) {
    case 1:
      return n1;
      break;
    case 2:
      return n2:
      break;
    default:
      return n1;
      break;
  }
}

void Polynomials::create (int d, int n []) {
};
