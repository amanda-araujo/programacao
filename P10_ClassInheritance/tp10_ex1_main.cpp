//
// Created by up202411286 on 02-05-2025.
//

#include <iomanip>
#include <iostream>
#include "ResaleProduct.h"

int main () {
    // const ResaleProduct p1(10001, 2.5f, 10);
    // std::cout << std::fixed << std::setprecision(2)
    //           << p1.get_id() << ' '
    //           << p1.get_profit_margin() << ' '
    //           << p1.get_sell_price() << std::endl;

    ResaleProduct p1(10002, 10, 0);
    p1.set_profit_margin(30);
    std::cout << std::fixed << std::setprecision(2)
              << p1.get_id() << ' '
              << p1.get_profit_margin() << ' '
              << p1.get_sell_price() << std::endl;
    return 0;
}