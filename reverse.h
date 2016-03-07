#ifndef _REVERSE
#define _REVERSE

class Reverse {
  public:
    Reverse();
    ~Reverse();
    /*
      Reverses an element numbers.
      n: the number to be reversed.
      m: m = 0 do by iteration, m = 1 do by recursion
    */
    int rev (int n = 0, int m = 0);
  private:
    /*
      Reverses a number by iteration.
    */
    int revI (int n = 0);
    /*
      Reverses a number by recursion.
    */
    int revR (int n, int r = 0);
};

#endif
