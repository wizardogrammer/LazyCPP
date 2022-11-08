#include <iostream>
#include <vector>

int sumPositive(const std::vector<int> &arr) {
  int result{};
  for (const int &num : arr)
    if (num > 0) result += num;
  return result;
}

int main() {
  std::vector<int> real{};
  unsigned num_elements{};
  double element{};

  std::cout << "Enter the number of element in the series: ";
  std::cin >> num_elements;

  // We get array elements and insert them to a vector via `pushback` method.
  for (int i{1}; i <= num_elements; i++) {
    std::cout << "Enter the element of the serie: ";
    std::cin >> element;
    real.push_back(element);
  }

  std::cout << "Final solution = " << sumPositive(real) << std::endl;
  return 0;
}
