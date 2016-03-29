#ifndef _POLYNOMIAL
#define _POLYNOMIAL

#include <string>
using namespace std;

class Polynomial {

  public:

    Polynomial ();
    ~Polynomial ();
    bool add (int *, int);
    bool add (Polynomial *);
    int evaluate (int) const;
    string print () const;

  private:
    int size;
    int * coefficients;
    int pow (int, int) const;
    int digitCount (int) const;
    string intToString (int) const;

};

#endif
