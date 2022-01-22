#include "WaterBottle.h"

WaterBottle::WaterBottle(double p) {
  price = p;
}

void WaterBottle::accept(Visitor* v) {
  v->visitWaterBottle(this);
}

double WaterBottle::getPrice() {
  return price;
}