#include <iostream>

#include "rational.cpp"

using std::endl;
using std::cout;

int main(int argc, char **argv) {
  rational a(1, 2);
  rational a1(1, 2);
  rational a2(2, 3);
  rational a3(2, 3);

  cout << a2 * a3 << endl;
  cout << a2 / a3 << endl;
  cout << a2 + a3 << endl;
  cout << a2 - a3 << endl;
}
