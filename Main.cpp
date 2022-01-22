#include "ShoppingCart.h"
#include "Apple.h"
#include "Banana.h"
#include "WaterBottle.h"
#include <iostream>

void displayMenu()
{
  std::cout << "Choose wisely: \n";
    std::cout << "1 - Add banana to your shopping cart \n";
    std::cout << "2 - Add apple to your shopping cart \n";
    std::cout << "3 - Add water bottle to your shopping cart \n";
    std::cout << "4 - Quit program \n\n";
}

int main() {
  ShoppingCart* cart = new ShoppingCart();
//   Banana* banana = new Banana(0.62, 2.0); //price then weight
//   Apple* apple = new Apple(1.08, 3.0);
//   WaterBottle* water = new WaterBottle(3.00); //not based on weight

//   //add them to the cart
//   cart->addItem(water);
//   cart->addItem(apple);
//   cart->addItem(banana);

  int input;
  bool finished = false;

  while(!finished) {
    displayMenu();
    std::cin >> input;

    switch(input) {
      case 1:
        std::cout << "\nBanana added...\n";
        cart->addItem(new Banana(0.62, 2.0));
        std::cout << "The cart's total is : " << cart->getShoppingCartTotal() << "\n\n";
        break;
      case 2:
        std::cout << "\nApple added...\n";
        cart->addItem(new Apple(1.08, 3.0));
        std::cout << "The cart's total is : " << cart->getShoppingCartTotal() << "\n\n";
        break;
      case 3:
        std::cout << "\nWater bottle added...\n";
        cart->addItem(new WaterBottle(3.00));
        std::cout << "The cart's total is : " << cart->getShoppingCartTotal() << "\n\n";
        break;
      case 4:
        finished = true;
        std::cout << "\nProgram ended. \n";
        break;
      default:
        std::cout << "\nInvalid response. \n";
        break;
    }
  }

  delete cart;
  return 0;
}