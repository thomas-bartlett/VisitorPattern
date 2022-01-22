#include "PriceVisitor.h"

void PriceVisitor::visitApple(Apple* a) {
  totalPrice += a->getWeight() * a->getPrice();
}

void PriceVisitor::visitBanana(Banana* b) {
  totalPrice += b->getWeight() * b->getPrice();
}

void PriceVisitor::visitWaterBottle(WaterBottle* w) {
  totalPrice += w->getPrice();
}

double PriceVisitor::getTotalPrice() {
  return totalPrice;
}