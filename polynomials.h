#ifdef _POLYNOMIALS
#define _POLYNOMIALS

class Polynomials {
  public:

    Polynomials();
    ~Polynomials();

    poly get (int i = 0) const;

  private:

    poly * arr;
    int size;

    struct poly {
      int * size;
      int * arr;
    };
}

#endif
