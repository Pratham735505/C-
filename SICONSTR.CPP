#include <iostream>

using namespace std;

class si
{
  double p, r, t;

  public:

  si {
    p = 10000;
    r = 6;
    t = 1;
  }

  si(double pe, double re, double te) {
    p = pe;
    r = re;
    t = te;
  }

  void out()
  {
    i = (p*r*t)/100;
    cout << "The simple interest calculated is: " << i << endl;
  }
};

int main()
{
  double prin, rate, intr;

  cout << "Enter the principle: " ;
  cin >> prin;
  cout << endl;

  cout << "Enter the rate: ";
  cin >> rate;
  cout << endl;

  cout << "Enter the interest: ";
  cin >> intr;
  cout << endl;

  si si1(prin, rate, intr);
  si1.out();

  return 0;
}