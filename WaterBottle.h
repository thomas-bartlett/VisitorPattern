#ifndef WATERBOTTLE_H
#define WATERBOTTLE_H

#include "Element.h"
#include "Visitor.h"

class WaterBottle : public Element {
private:
  double price;

public:
  WaterBottle(double = 0);
  void accept(Visitor*);
  //price per pound
  double getPrice();
};

#endif