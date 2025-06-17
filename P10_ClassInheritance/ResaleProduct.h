//
// Created by up202411286 on 02-05-2025.
//

#ifndef RESALEPRODUCT_H
#define RESALEPRODUCT_H

// New class, derived from Product
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
#include "Product.h"
#include "ResaleProduct.h"

class ResaleProduct : public Product {
    // Inherits all attributes and methods from Product
    // Has an additional attribute: profit margin (int)
public:
    ResaleProduct(int id, float price, int profit_margin); // Constructor
    ~ResaleProduct() override;
    int get_profit_margin() const; // Getter
    void set_profit_margin(int margin); // Setter
    float get_sell_price() const override; // Considering profit_margin and price

private:
    int profit_margin_;
};


#endif //RESALEPRODUCT_H
