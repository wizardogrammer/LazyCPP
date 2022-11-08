#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> &ascendingOrder(std::vector<int> &arr) {
  std::sort(arr.begin(), arr.end());
  return arr;
}

void printVec(const std::vector<int> &a) {
  char comma[3]{'\0', ' ', '\0'};
  for (const int &num : a) {
    std::cout << comma << num;
    comma[0] = ',';
  }
  std::cout << std::endl;
}

int main() {
  int n{};
  std::cout << "enter the length of array n = ";
  std::cin >> n;

  std::vector<int> arr(n);
  for (int i{}; i < n; i++) {
    std::cout << "Enter a(" << i + 1 << ") : ";
    std::cin >> arr[i];
  }

  printVec(ascendingOrder(arr));

  return 0;
}
