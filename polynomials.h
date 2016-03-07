#ifdef _POLYNOMIALS
#define _POLYNOMIALS

class Polynomials {
  public:
    Polynomials();
    ~Polynomials();
    int get(int n = 0) const;
    void create (int d = 0, int n []);
  private:
    int * n1;
    int * n2;
}

#endif
