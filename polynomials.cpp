#include 'polynomials.cpp'

Polynomials::Polynomials () {
  int size = 0;
  arr = new poly [size];
};

Polynomials::~Polynomials () {
  for (int i = 0; i < size; i++) {
    delete [] arr[i].arr;
    delete [] arr[i].size;
  }
  delete [] arr;
};

poly Polynomials::get (int i) const {
  if (i >= 0 && i < size) return arr[i];
  else return 0;
};
