#ifndef APPLE_H
#define APPLE_H

#include "Element.h"
#include "Visitor.h"

class Apple : public Element {
private:
  double weight;
  double price;

public:
  Apple(double = 0, double = 0);
  void accept(Visitor*);
  //price per pound
  double getPrice();
  double getWeight();
};

#endif