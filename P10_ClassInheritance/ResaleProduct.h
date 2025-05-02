//
// Created by up202411286 on 02-05-2025.
//

#ifndef RESALEPRODUCT_H
#define RESALEPRODUCT_H

// New class, derived from Product
// Defined here (.h) and implemented in ResaleProduct.cpp

/* Write the definition of class ResaleProduct, that should be a subclass of Product, having:

    A constructor that takes all the parameters necessary to define a resale product: id, price and profit margin;
    Functions int get_profit_margin() const and void set_profit_margin(int margin) to set the profit margin.
    and a redefinition of get_sell_price() according to the requirements above.
*/
#include "Product.h"

class ResaleProduct: public Product{
    // Inherits all attributes and methods from Product
    // Has an additional attribute: profit margin (int)
public:
    ResaleProduct(int id, float price, int profit_margin); // Constructor
    ~ResaleProduct() override;
    int get_profit_margin() const; // Getter
    void set_profit_margin(int margin); // Setter
    float get_sell_price() const; // Considering profit_margin and price
private:
    int profit_margin_;
};

/* class Product {
public:
  Product(int id, float price);
  virtual ~Product();
  int get_id() const;
  virtual float get_sell_price() const;
protected:
  int id_;
  float price_;
}; */

#endif //RESALEPRODUCT_H
