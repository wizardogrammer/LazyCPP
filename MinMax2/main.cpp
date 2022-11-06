#include <iostream>
#include <vector>

int maxx(std::vector<int> &arr) {
  int res{};
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] >= arr[0]) {
      res = arr[i];
    }
  }
  return res;
}

int minn(std::vector<int> &arr) {
  int res{};
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] <= arr[0]) {
      res = arr[i];
    }
  }
}

std::vector<int> oddIndices(std::vector<int> &arr) {
  for (int i = 0; i < arr.size(); i = 2 * i + 1) {
    arr.push_back(arr[i]);
  }
  return arr;
}

std::vector<int> evenIndices(std::vector<int> &arr) {
  for (int i = 0; i < arr.size(); i = 2 * i) {
    arr.push_back(arr[i]);
  }
  return arr;
}

int result(std::vector<int> &arr, int N) { return maxx(arr) + minn(arr); }

int main() {
  int n;  // size of array
  std::cout << "Enter the size of array n : ";
  std::cin >> n;
  std::vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Enter a(" << i + 1 << ") = ";  // creat user defined vector
    std::cin >> arr[i];
  }

  std::cout << "\nmin(oddindices) + max(even indices) = " << result(arr, n)
            << std::endl;
}
