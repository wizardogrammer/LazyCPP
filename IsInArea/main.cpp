#include <iostream>
#include <utility>

bool isInArea(float x, float y) {
  bool is_in_square{x < 1 and x > 0 and y < 1 and y > 0};
  bool is_in_shaded{(y > -0.5 * x + 0.5) and (y < -0.5 * x + 1)};
  return is_in_square and is_in_shaded;
}

int main() {
  bool is_break{true};
  std::pair<float, float> coordinate{};

  while (true and is_break) {
    std::cout << "Enter x: ";
    std::cin >> coordinate.first;
    std::cout << "Enter y: ";
    std::cin >> coordinate.second;

    if (coordinate.first == 0 and coordinate.second == 0) is_break = false;

    std::cout << isInArea(coordinate.first, coordinate.second) << std::endl;
  }

  return 0;
}
