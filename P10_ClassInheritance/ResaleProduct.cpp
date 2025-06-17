//
// Created by up202411286 on 02-05-2025.
//

#include "ResaleProduct.h"
#include "Product.h"
// Implementation of the methods from ResaleProduct class

// Constructor
ResaleProduct::ResaleProduct(int id, float price, int profit_margin): Product(id, price), profit_margin_(profit_margin) {}

// Destructor
ResaleProduct::~ResaleProduct() = default;

// Getter Method
int ResaleProduct::get_profit_margin() const { return profit_margin_; }

// Setter Method
void ResaleProduct::set_profit_margin(int margin) { profit_margin_ = margin; }

// New Method
float ResaleProduct::get_sell_price() const{
    // Calculation of sell price considering the price and profit margin
    // resale = price * ((100 + profit margin)/100) // int/int division!
    return Product::get_sell_price() * ((100 + get_profit_margin())/(float)100);
}
