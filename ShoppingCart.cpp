#include "ShoppingCart.h"
#include "PriceVisitor.h"

ShoppingCart::~ShoppingCart() {
  for(auto it : items)
  {
    delete it;
  }
}

double ShoppingCart::getShoppingCartTotal() {
  PriceVisitor* pv = new PriceVisitor();
  for(auto it : items)
  {
    it->accept(pv);
  }
  double value = pv->getTotalPrice();
  delete pv;
  return value;
}

void ShoppingCart::addItem(Element* it){
  items.insert(it);
}

void ShoppingCart::removeItem(Element* it){
  items.erase(it);
}