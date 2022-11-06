#include <cmath>
#include <iostream>
#include <vector>

// square of integers in a list function
std::vector<int> squareOfNumber(const std::vector<int>& Arr) {
  std::vector<int> result(Arr.size());

  for (int i = 0; i < Arr.size(); i++) result[i] = std::pow(Arr[i], 2);

  return result;
}

// print a list function
void printvec(const std::vector<int>& a) {
  char comma[3]{'\0', ' ', '\0'};
  for (const int& num : a) {
    std::cout << comma << num;
    comma[0] = ',';
  }
  std::cout << std::endl;
}

int main() {
  int n{};  // range of array.
  std::cout << "Enter the range of array n = ";
  std::cin >> n;

  std::vector<int> arr(n);
  // creat a list by user.
  for (int i{}; i < n; i++) {
    std::cout << "Enter a(" << i + 1 << ") = ";
    std::cin >> arr[i];
  }

  printvec(squareOfNumber(arr));  // call square and print function
}
