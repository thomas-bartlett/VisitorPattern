#include "Banana.h"

Banana::Banana(double p, double w) {
  weight = w;
  price = p;
}

void Banana::accept(Visitor* v) {
  v->visitBanana(this);
}

double Banana::getPrice() {
  return price;
}

double Banana::getWeight() {
  return weight;
}