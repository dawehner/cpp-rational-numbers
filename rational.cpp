#include "rational.h"

#include <ostream>
#include <iostream>

using std::ostream;
using std::endl;
using std::cout;

rational::rational(int zaehler, int nenner) {
  this->zaehler = zaehler;
  this->nenner = nenner;
}

bool rational::operator==(rational& b) {
  bool zaehler_equal = this->getZaehler() == b.getZaehler();
  bool nenner_equal = this->getNenner() == b.getNenner();

  bool same = this->zaehler == b.getZaehler() && this->nenner == b.getNenner();
  return same;
}

rational rational::operator*(rational& b) {
  rational result(this->getZaehler() * b.getZaehler(), this->getNenner() * b.getNenner());
  return result;
}

rational rational::operator-(rational& b) {
  rational result(this->getZaehler() - b.getZaehler(), this->getNenner() - b.getNenner());
  return result;
}
rational rational::operator+(rational& b) {
  rational result(this->getZaehler() + b.getZaehler(), this->getNenner() + b.getNenner());
  return result;
}

rational rational::operator/(rational& b) {
  rational result(this->getZaehler() / b.getZaehler(), this->getNenner() / b.getNenner());
  return result;
}

int rational::getNenner() {
  return this->nenner;
}
int rational::getZaehler() {
  return this->zaehler;
}

ostream& operator<<(ostream& stream, rational rat) {
  stream << rat.getZaehler() << "|" << rat.getNenner() << std::endl;
  return stream;
}
