#include "reverse.h"

Reverse::Reverse () {};
Reverse::~Reverse () {};

int Reverse::rev (int n, int m) {
  switch (m) {
    case 1:
      return revI(n);
      break;
    case 2:
      return revR(n, 0);
      break;
    default:
      if (n > 0) return revI(n);
      else return -1;
  }
};

int Reverse::revI (int n) {
  if (n == 0) return 0;
  int r = 0;
  for ( ; n != 0 ; ) {
    r = r * 10;
    r = r + n % 10;
    n = n / 10;
  }
  return r;
};

int Reverse::revR (int n, int r) {
  if (n == 0) return r;
  r = r * 10;
  r = r + n % 10;
  n = n / 10;
  revR(n, r);
}
