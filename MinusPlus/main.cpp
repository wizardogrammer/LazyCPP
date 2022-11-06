#include <iostream>
#include <vector>

int maxx(std::vector<int> arr) {
  int res{};
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] >= arr[0]) {
      res = arr[i];
    }
  }
  return res;
}

std::vector<int> minusPlusOrder(std::vector<int> arr) {
  for (int i = 0; i < arr.size(); i++) {
    if ((i + 1) % 2 != 0)
      arr[i] = (-1) * arr[i];
    else
      continue;
  }
  return arr;
}

int main() {
  int n;  // size of array
  std::cout << "Enter the size of array n : ";
  std::cin >> n;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Enter a(" << i + 1 << ") = ";  // creat user defined vector
    std::cin >> arr[i];
  }

  std::cout << "\nmax(-a1,a2,-a3...) = " << maxx(minusPlusOrder(arr))
            << std::endl;
}
