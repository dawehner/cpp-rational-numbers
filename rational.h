#ifndef RATIONAL_H
#define RATIONAL_H

#include <ostream>

using std::ostream;

/**
 * Defines a class which stores rational numbers.
 */
class rational {
protected:
    int zaehler;
    int nenner;

public:
  rational(int zaehler, int nenner);

  /**
   * Get the zaehler of the rational number.
   */
  int getZaehler();

  /**
   * Get the nenner of the rational number.
   */
  int getNenner();

  /**
   * Overrides the + operator.
   */
  rational operator+(rational& b);

  /**
   * Overrides the - operator.
   */
  rational operator-(rational& b);

  /**
   * Overrides the * operator.
   */
  rational operator*(rational& b);

  /**
   * Overrides the / operator.
   */
  rational operator/(rational& b);

  /**
   * Overrides the == operator.
   */
  bool operator==(rational& b);

  /**
   * Overrides the << operator.
   */
  friend ostream& operator<<(ostream& stream, rational rat);
};

#endif