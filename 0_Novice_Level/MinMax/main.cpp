#include <algorithm>
#include <iostream>

int main() {
  float x{}, t{};

  std::cout << "enter 2 numbers x and t: " << std::endl;
  std::cin >> x >> t;

  std::cout << "A) y = |x| -> |" << x << "| = " << abs(x) << std::endl;

  float y{abs(1 - abs(1 + x))};
  std::cout << "B) y = |1-|1+x|| -> |1-|1+" << x << "|| = " << y << std::endl;

  std::cout << "C) z = max(x, t) -> max(" << x << ", " << t
            << ") = " << std::max(x, t) << std::endl;

  std::cout << "D) z = max(x, t, y) -> max(" << x << ", " << t << ", " << y
            << ") = " << std::max({x, t, y}) << std::endl;

  std::cout << "E) z = min(x, max(y, t)) -> min(" << x << ", max(" << y << ", "
            << t << ")) = " << std::min(x, std::max(y, t)) << std::endl;

  return 0;
}
