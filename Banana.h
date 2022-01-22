#ifndef BANANA_H
#define BANANA_H

#include "Element.h"
#include "Visitor.h"

class Banana : public Element {
private:
  double weight;
  double price;

public:
  Banana(double = 0, double = 0);
  void accept(Visitor*);
  //price per pound
  double getPrice();
  double getWeight();
};

#endif