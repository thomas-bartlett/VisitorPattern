#ifndef ELEMENT_H
#define ELEMENT_H

#include "Visitor.h"

class Visitor;

class Element {
public:
  virtual void accept(Visitor* = nullptr) = 0;
  virtual ~Element() {}
};

#endif