#ifndef PRICEVISITOR_H
#define PRICEVISITOR_H

#include "Visitor.h"
#include "Banana.h"
#include "Apple.h"
#include "WaterBottle.h"

class PriceVisitor : public Visitor {
private:
   double totalPrice = 0;
public:
  void visitApple(Apple*);
  void visitBanana(Banana*);
  void visitWaterBottle(WaterBottle*);
  double getTotalPrice();
};

#endif