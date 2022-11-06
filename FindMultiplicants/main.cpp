#include <iostream>
#include <vector>

std::vector<int> findMultiplicants(int P, const std::vector<int>& ARR) {
  std::vector<int> result{};
  for (int element : ARR)
    if (element % P == 0) result.push_back(element);
  return result;
}

void PrintResult(const std::vector<int>& n) {
  char comma[3]{'\0', ' ', '\0'};
  for (const int& num : n) {
    std::cout << comma << num;
    comma[0] = ',';
  }
  std::cout << std::endl;
}

int main() {
  int n{};  // length of array
  int p{};  // program searchs the array to find multiplicants of p.

  std::cout << "Enter the length of arr: ";
  std::cin >> n;

  std::cout << "\nEnter a number P to find its multiplicants in array: ";
  std::cin >> p;

  std::vector<int> arr(n);
  // creating array by user
  for (unsigned i{}; i < n; i++) {
    std::cout << "Enter number of array a(" << i + 1 << "): ";
    std::cin >> arr[i];
  }
  PrintResult(findMultiplicants(p, arr));
}
