#ifndef VISITOR_H
#define VISITOR_H

// #include "ConcreteElementA.h"
// #include "ConcreteElementB.h"

class Apple;
class Banana;
class WaterBottle;

class Visitor {
public:
  virtual void visitApple(Apple* = nullptr) = 0;
  virtual void visitBanana(Banana* = nullptr) = 0;
  virtual void visitWaterBottle(WaterBottle* = nullptr) = 0;
  virtual ~Visitor() {}
};

#endif