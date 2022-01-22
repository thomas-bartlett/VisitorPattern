#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Visitor.h"
#include "Element.h"
#include <unordered_set>

class ShoppingCart {
private:
   std::unordered_set<Element*> items;
public:
  ~ShoppingCart();
  double getShoppingCartTotal();
  void addItem(Element*);
  void removeItem(Element*);
};

#endif