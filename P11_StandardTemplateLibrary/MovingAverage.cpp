//
// Created by Amanda on 16/06/2025.
//

#include "MovingAverage.h"
#include <iostream>
#include <iomanip>
/*class MovingAverage {
public:
  MovingAverage(std::size_t n);
  void update(double value);
  double get() const;
private:
  std::size_t n_; // max
  std::list<double> values_;
};*/

MovingAverage::MovingAverage(std::size_t n) : n_(n) {} // Constructor

/* sets the most recent value to consider for the moving average,
 * adding v to the values_ list. If there are already n_ values stored,
 * the least recent value must be discarded (removed from values_*/
void MovingAverage::update(double value) {
    if (values_.size() == n_) {
      // remove least recent value to create space
      values_.pop_front();
    }
    // add v to values_
    values_.push_back(value); // always adds the new
}

double MovingAverage::get() const {
  double movavg = 0.0;
  for (auto v : values_) {
    movavg += v;
  }
  return movavg /= values_.size();
}

int main () {
  // MovingAverage ma(1);
  // const MovingAverage& r = ma;
  // ma.update(1.0);
  // std::cout << std::fixed << std::setprecision(2) << r.get() << '\n';

  MovingAverage ma(1);
  double a[] { 1.2, 3.4, 5.0 };
  for (double x : a) {
    ma.update(x);
    std::cout << std::fixed << std::setprecision(2) <<  ma.get() << ' ';
  }
  std::cout << std::fixed << std::setprecision(2) <<  ma.get() << '\n';
  return 0;
}