#include <iostream>

void ProductOfIndices(const long *vec, int &N) {
  long multiplication{1};
  char comma[3]{'\0', ' ', '\0'};

  for (int i{}; i < N; i++) {
    std::cout << comma << (multiplication *= vec[i]);
    comma[0] = ',';
  }
  std::cout << std::endl;
}

int main() {
  // define variable `n` to get number from user for size of array
  int n{};
  std::cout << " Enter the range of array : ";
  std::cin >> n;

  // Allocate memory for dynamic array `arr` in heap.
  long *arr = new long(n);
  for (int i{}; i < n; i++) {
    std::cout << " enter a number b(" << i + 1 << "): ";
    std::cin >> arr[i];
  }

  ProductOfIndices(arr, n);
  delete arr;
  return 0;
}
