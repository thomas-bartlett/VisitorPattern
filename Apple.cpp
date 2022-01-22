#include "Apple.h"

Apple::Apple(double p, double w) {
  weight = w;
  price = p;
}

void Apple::accept(Visitor* v) {
  v->visitApple(this);
}

double Apple::getPrice() {
  return price;
}

double Apple::getWeight() {
  return weight;
}